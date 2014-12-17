void RecvPacket (CGenericMessage *param1)
{
	DWORD packetType = param1->GetType();
	if (packetType > 0x2919)
	{
		//+2FACF7
	}
	else if (packetType == 0x2919)
	{
		//+2FACE4
	}
	else if (packetType > 0x2912)
	{
		//+2FACA8
	}
	else if (packetType == 0x2912)
	{
		//+2FAC92
	}
	else if (packetType == 0x2807)
	{
		//+2FAC7C
	}
	else if (packetType != 0x2908)
	{
		//+2FAD6E
	}
	else
	{
		//+2FAC66
	}
}
