#include "StdAfx.h"
#include "RecvPacket.h"

CRecvPacket::CRecvPacket(void *recvBuffer, size_t packetSize)
{
	m_isEncrypted = true;
	m_len = *(long *)recvBuffer;
	if ( (m_len < 0x14)||(m_len > 0x4014) )
	{
		m_isValid = false;
		return;
	}
	m_payload = (unsigned char *)malloc(m_len);
	memcpy(m_payload, recvBuffer, m_len);
	Decrypt();
	m_type = *(unsigned long *)(m_payload+4);
	m_isValid = CheckPacket();
}


CRecvPacket::~CRecvPacket(void)
{
	free(m_payload);
}

unsigned char *CRecvPacket::GetPPtr()
{
	return m_payload;
}

bool CRecvPacket::IsValid()
{
	return m_isValid;
}
