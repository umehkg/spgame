#pragma once
#include "CPacket.h"
#include <stdlib.h>
class CRecvPacket : public CPacket
{
private:
	bool m_isValid;
public:
	CRecvPacket(void *recvBuffer, size_t packetSize);
	~CRecvPacket(void);
	unsigned char *GetPPtr();
	bool IsValid();
};

