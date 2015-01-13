#include "StdAfx.h"
#include "RecvPacket.h"

CRecvPacket::CRecvPacket(void *recvBuffer, size_t packetSize)
{
	/* Constructor code of CPacket
	m_mlen = 0;
	m_len = 0;
	m_payload = NULL;
	m_isEncrypted = false;
	*/

	//extra constructor code
	m_isEncrypted = true;
	m_len = *(long *)recvBuffer;
	if ( (m_len < 0x14)||(m_len > 0x4014) )
	{
		m_isValid = false;
		return;
	}
	m_payload = new unsigned char [m_len];
	memcpy(m_payload, recvBuffer, m_len);
	Decrypt();
	m_type = *(long *)&m_payload[4];
	m_isValid = CheckPacket();
}


CRecvPacket::~CRecvPacket(void)
{
	//calls the CPacket destructor
	//no extra destructor code needed here
}

bool CRecvPacket::IsValid()
{
	return m_isValid;
}
