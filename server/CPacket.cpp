#include "stdafx.h"
#include "CPacket.h"
#include "md5.h"

/*
Version 20141229

*/


unsigned long CPacket::makeDigest()
{
	bool origCryptState = false;
	char buf[0x10];
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

void CPacket::AppendData(void *dataBuffer, size_t dataSize)
{
	bool origCryptState = false;
	if (m_isEncrypted)
		origCryptState = true;
	if (origCryptState)
		Decrypt();

	if (dataSize <= 0)
		return;
	if (m_len + dataSize > 0x4014)
		return;
	unsigned char *new_payload = (unsigned char *)malloc(m_len+dataSize);
	memcpy(new_payload, m_payload, m_len); //copy old payload
	memcpy(new_payload+m_len, dataBuffer, dataSize); //append new data
	/* refresh the m_payload buffer */
	free(m_payload);
	m_len += dataSize;
	m_payload = (unsigned char *)malloc(m_len);
	memcpy(m_payload, new_payload, m_len);
	free(new_payload);

	makeDigest(); //refreshes digest

	if (origCryptState)
		Encrypt();
}

bool CPacket::CheckPacket()
{
	bool origCryptState = false;
	if (m_isEncrypted)
		origCryptState = true;
	if (origCryptState)
		Decrypt();
	unsigned long orig_header = *(unsigned long *)(m_payload+0x8);
	unsigned long orig_sp_md5 = *(unsigned long *)(m_payload+0xC);
	if (origCryptState)
		Encrypt();
	if (orig_header != 0x2B1C)
		return false;
	if (orig_sp_md5 != makeDigest())
		return false; //checksum failed
	return true;
}

CPacket::CPacket(unsigned long packetType, const void *data, size_t dataSize)
{
	if (dataSize < 0)
		return;
	if (dataSize > 0x4000)
		return;
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
		if (m_len > 0x4014)
				return; //error: too large
        if (m_len != dataSize)
                return; //error: packet size mismatch
        m_type = *(long *)((unsigned long)payload+4);
        m_payload = (unsigned char *)malloc(m_len);
        memcpy(m_payload, payload, m_len);
        m_isEncrypted = isEncrypted;
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
 
void CPacket::Output(char *outBuffer)
{
        memcpy(outBuffer, m_payload, m_len);
}
void CPacket::Output(unsigned char *outBuffer)
{
        memcpy(outBuffer, m_payload, m_len);
}
