#include "stdafx.h"
#include "CPacket.h"
#include "md5.h"

/*
Version 20150114

*/


unsigned long CPacket::MakeDigest()
{
	bool origCryptState = m_isEncrypted;
	char buf[0x10];
	Decrypt();
	if ( *(long *)&m_payload[0xC] )
		*(unsigned long *)&m_payload[0xC] = 0UL;
	md5_raw(buf, (const char *)m_payload, m_len);
	unsigned long sp_md5 = *(unsigned long *)buf ^ *(unsigned long *)&buf[4] ^ *(unsigned long *)&buf[8] ^ *(unsigned long *)&buf[0xC];
	*(unsigned long *)&m_payload[0xC] = sp_md5;
	if (origCryptState)
		Encrypt();
	return sp_md5;
}

bool CPacket::CheckPacket()
{
	bool origCryptState = m_isEncrypted;
	Decrypt();
	unsigned long orig_header = *(unsigned long *)&m_payload[8];
	unsigned long orig_sp_md5 = *(unsigned long *)&m_payload[0xC];
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
	m_isInit = false;
	m_mlen = m_len = 0x14;
	m_type = packetType;
	m_payload = new unsigned char [m_mlen];
	m_isEncrypted = false;
	*(long *)m_payload = m_len; //packetSize
	*(long *)&m_payload[4] = m_type; //packetType
	*(long *)&m_payload[8] = 0x2B1C; //magic header
	*(long *)&m_payload[0xC] = 0; //for digest
	*(long *)&m_payload[0x10] = -1; //packetState
	MakeDigest();
	m_isInit = true;
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
	m_payload = new unsigned char [m_mlen]();
	MakeDigest();
}

CPacket::CPacket(unsigned long packetType, const void *data, size_t dataSize)
{
	if ( (dataSize < 0) || (dataSize > 0x4000) )
		return;
	m_mlen = m_len = dataSize + 0x14;
	m_type = packetType;
	m_isEncrypted = false;
	m_payload = (data == NULL) ? new unsigned char [m_mlen] : new unsigned char [m_mlen]();
	*(long *)m_payload = m_len; //packetSize
	*(long *)&m_payload[4] = m_type; //packetType
	*(long *)&m_payload[8] = 0x2B1C; //magic header
	*(long *)&m_payload[0xC] = 0; //for digest
	*(long *)&m_payload[0x10] = -1; //packetState
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
		m_isInit = false;
        m_mlen = m_len = *(long *)payload; //get payload size from first 4 bytes of payload
        if (m_len < 0x14)
                return; //error: packet size too small
		if (m_len > 0x4014)
				return; //error: too large
        if (m_len != packetSize)
                return; //error: packet size mismatch
        m_type = *(long *)((unsigned long)payload+4);
        m_payload = new unsigned char [m_mlen];
        memcpy(m_payload, payload, m_len);
        m_isEncrypted = isEncrypted;
		m_isInit = true;
}

CPacket::~CPacket()
{
        //destructor
        delete m_payload;
}
 
size_t CPacket::GetSize()
{
	return m_len;
}

unsigned long CPacket::GetType()
{
	m_type = *(long *)&m_payload[4];
	return m_type;
}

void CPacket::Encrypt()
{
        if (m_isEncrypted)
                return;
        if (m_len <= 0)
                return;
        for (long i = 4; i < m_len; i++)
        {
                unsigned char c = m_payload[i];
                c = ~c;
               *(unsigned char *)&m_payload[i] = (unsigned char)( (c >> 5)|(c << 3) );
        }
        m_isEncrypted = true;
}
void CPacket::Decrypt()
{
        if (!m_isEncrypted)
                return;
        if (m_len <= 0)
                return;
        for (long i = 4; i < m_len; i++)
        {
                unsigned char c = m_payload[i];
                c = (c << 5)|(c >> 3);
                *(unsigned char *)&m_payload[i] = (unsigned char)~c;
        }
        m_isEncrypted = false;
}
unsigned char *CPacket::Payload()
{
	return m_payload;
}
void CPacket::Output(char *outBuffer)
{
        memcpy(outBuffer, m_payload, m_len);
}
void CPacket::Output(unsigned char *outBuffer)
{
        memcpy(outBuffer, m_payload, m_len);
}
