#include "stdafx.h"
#include "CPacket.h"
#include "md5.h"

/*
Version 20150108

*/


unsigned long CPacket::MakeDigest()
{
	bool origCryptState = m_isEncrypted;
	char buf[0x10];
	if ( *(long *)(m_payload+0xC) != 0 )
		memcpy(m_payload+0xC, new unsigned long(0), sizeof(long));
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

	if (m_len + dataSize > m_mlen)
	{
		m_payload = (unsigned char *)realloc(m_payload, m_mlen<<1);
		m_mlen <<= 1;
	}

	memcpy(m_payload+m_len, dataBuffer, dataSize);
	m_len += dataSize;

	MakeDigest(); //refreshes digest

	if (origCryptState)
		Encrypt();
}

bool CPacket::CheckPacket()
{
	bool origCryptState = m_isEncrypted;
	Decrypt();
	unsigned long orig_header = *(unsigned long *)(m_payload+0x8);
	unsigned long orig_sp_md5 = *(unsigned long *)(m_payload+0xC);
	if (origCryptState)
		Encrypt();
	if (orig_header != 0x2B1C)
		return false;
	if (orig_sp_md5 != MakeDigest())
		return false; //checksum failed
	return true;
}

CPacket::CPacket(unsigned long packetType)
{
	m_mlen = m_len = 0x14;
	m_type = packetType;
	m_payload = (unsigned char *)malloc(m_mlen);
	m_isEncrypted = false;
	memcpy(m_payload, &m_len, sizeof(long));
	memcpy(m_payload+4, &m_type, sizeof(long));
	memcpy(m_payload+8, new unsigned long(0x2B1C), sizeof(long)); //magic number for packet header
	memcpy(m_payload+0xC, new unsigned long(0), sizeof(long)); //placeholder for digest
	memcpy(m_payload+0x10, new unsigned long(0xFFFFFFFF), sizeof(long)); //packet state. valid values are unknown
	MakeDigest();
}

CPacket::CPacket()
{
	m_mlen = 0;
	m_len = 0;
	m_payload = NULL;
	m_isEncrypted = false;

}

CPacket::CPacket(unsigned long packetType, size_t packetSize)
{
	if (packetSize < 0x14)
		return;
	if (packetSize > 0x4014)
		return;
	m_isEncrypted = false;
	m_mlen = m_len = packetSize;
	m_type = packetType;
	m_payload = (unsigned char *)calloc(m_mlen, 0x1);
	MakeDigest();
}

CPacket::CPacket(unsigned long packetType, const void *data, size_t dataSize)
{
	if (dataSize < 0)
		return;
	if (dataSize > 0x4000)
		return;
	m_mlen = m_len = dataSize + 0x14;
	m_type = packetType;
	m_isEncrypted = false;
	if (data == NULL)
	{
		m_payload = (unsigned char *)malloc(m_mlen);
	}
	else
	{
		m_payload = (unsigned char *)calloc(m_mlen, 0x1);
	}
	memcpy(m_payload, &m_len, sizeof(long));
	memcpy(m_payload+4, &m_type, sizeof(long));
	memcpy(m_payload+8, new unsigned long(0x2B1C), sizeof(long)); //magic number for packet header
	memcpy(m_payload+0xC, new unsigned long(0), sizeof(long)); //placeholder for digest
	memcpy(m_payload+0x10, new unsigned long(0xFFFFFFFF), sizeof(long)); //packet state. valid values are unknown
	if (data != NULL)
		memcpy(m_payload+0x14, data, dataSize); //append data 
	MakeDigest();
}
void CPacket::UpdateDataAt(unsigned long packetOffset, void *dataBuffer, size_t dataSize)
{
	bool origCryptState = m_isEncrypted;
	Decrypt();

	if ( (packetOffset < 0x14) || (packetOffset+dataSize > (unsigned long)m_len) )
		return;
	memcpy(m_payload+packetOffset, dataBuffer, dataSize);
	MakeDigest();

	if (origCryptState)
		Encrypt();
}
CPacket::CPacket(const void *payload, size_t packetSize, bool isEncrypted)
{
        m_mlen = m_len = *(long *)payload; //get payload size from first 4 bytes of payload
        if (m_len < 0x14)
                return; //error: packet size too small
		if (m_len > 0x4014)
				return; //error: too large
        if (m_len != packetSize)
                return; //error: packet size mismatch
        m_type = *(long *)((unsigned long)payload+4);
        m_payload = (unsigned char *)malloc(m_mlen);
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
