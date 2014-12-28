#include "stdafx.h"
#include "CPacket.h"
#include "md5.h"

/*
Version 20141225a

*/

void CPacket::getLoginInfo()
{
        m_pLoginInfo = new LOGIN_INFO;
        memcpy(&m_pLoginInfo->id[0], (char *)(void *)(m_payload+0x3C),0xC);
        memcpy(&m_pLoginInfo->pw[0], (char *)(void *)(m_payload+0x49),0xC);
}

unsigned long CPacket::makeDigest()
{
	bool origCryptState = false;
	char buf[0x11];
	if ( *(long *)(m_payload+0xC) != 0 )
		memcpy(m_payload+0xC, new unsigned long(0), sizeof(long));
	if (m_isEncrypted)
		origCryptState = true;
	if (origCryptState)
		Decrypt();
	md5_raw(buf, (const char *)m_payload, m_len);
	unsigned long sp_md5 = *(unsigned long *)buf ^ *(unsigned long *)(buf+4) ^ *(unsigned long *)(buf+8) ^ *(unsigned long *)(buf+0xC);
	memcpy(m_payload+0xC, &sp_md5, sizeof(long));
	if (origCryptState)
		Encrypt();
	return sp_md5;
}

CPacket::CPacket(unsigned long packetType, const void *data, size_t dataSize)
{
	m_len = dataSize + 0x14;
	m_type = packetType;
	m_payload = (unsigned char *)malloc(m_len);
	m_isEncrypted = false;
	memcpy(m_payload, &m_len, sizeof(long));
	memcpy(m_payload+4, &m_type, sizeof(long));
	memcpy(m_payload+8, new unsigned long(0x2B1C), sizeof(long)); //magic number for packet header
	memcpy(m_payload+0xC, new unsigned long(0), sizeof(long)); //placeholder for digest
	memcpy(m_payload+0x10, new unsigned long(0xFFFFFFFF), sizeof(long)); //packet state. valid values are unknown
	memcpy(m_payload+0x14, data, dataSize); //append data 
	makeDigest();
}

CPacket::CPacket(const void *payload, size_t dataSize, bool isEncrypted)
{
        m_len = *(long *)payload; //get payload size from first 4 bytes of payload
        if (m_len < 4)
                return; //error: packet size too small
        if (m_len != dataSize)
                return; //error: packet size mismatch
        m_type = *(long *)((unsigned long)payload+4);
        m_payload = (unsigned char *)malloc(m_len);
        memcpy(m_payload, payload, m_len);
        m_isEncrypted = isEncrypted;
        if (m_type == 0x2707)
                getLoginInfo();
}

CPacket::~CPacket()
{
        //destructor
        free(m_payload);
}
 
size_t CPacket::GetSize()
{
	return m_len;
}
unsigned long CPacket::GetType()
{
	return m_type;
}

void CPacket::Encrypt()
{
        if (m_isEncrypted)
                return;
        if (m_len <= 0)
                return;
        for (long i = 0; i < m_len; i++)
        {
                unsigned char c = *(m_payload+4+i);
                c = (unsigned char)~c;
                *(m_payload+4+i) = (c >> 5)|(c << 3);
        }
        m_isEncrypted = true;
}
void CPacket::Decrypt()
{
        if (!m_isEncrypted)
                return;
        if (m_len <= 0)
                return;
        for (long i = 0; i < m_len; i++)
        {
                unsigned char c = *(m_payload+4+i);
                c = (c << 5)|(c >> 3);
                *(m_payload+4+i) = (unsigned char)~c;
        }
        m_isEncrypted = false;
}
 
void CPacket::Output(char *outBuffer, int m_len)
{
        memcpy(outBuffer, m_payload, m_len);
}
void CPacket::Output(unsigned char *outBuffer, int m_len)
{
        memcpy(outBuffer, m_payload, m_len);
}
void CPacket::OutputLoginInfo(PLOGIN_INFO pLoginInfo)
{
        memcpy(&pLoginInfo->id[0], &m_pLoginInfo->id[0], 0xC);
        memcpy(&pLoginInfo->pw[0], &m_pLoginInfo->pw[0], 0xC);
}
