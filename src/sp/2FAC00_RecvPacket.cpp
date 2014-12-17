void RecvPacket (CGenericMessage *param1)
{
	DWORD packetType = param1->GetType();
	if (packetType > 0x2919)
	{
		//+2FACF7
		DWORD switchType = packetType - 0x2922;
		switch(switchType)
		{
			case 0:
				//call +2F8BD0
				break;
			case 1:
				//call +2FAAF0
				break;
			case 2:
				//call +2FA9F0
				break;
			case 3:
				//call +2FAAD0
				break;
			default:
		}
	}
	else if (packetType == 0x2919)
	{
		//+2FACE4
		//call +2F8AF0
	}
	else if (packetType > 0x2912)
	{
		//+2FACA8
		DWORD subType = packetType - 0x2916;
		if (subType == 0)
		{
			//+2FACCE
			//call +2F9FC0
		}
		else if (subType == 2)
		{
			//+2FACB8
			//call +2F8B50
		}
	}
	else if (packetType == 0x2912)
	{
		//+2FAC92
		//call +2F90B0
	}
	else if (packetType == 0x2807)
	{
		//+2FAC7C
		//call +2F9910
	}
	else if (packetType == 0x2908)
	{
		//+2FAC66
		//call +2F8E80
	}
	//+2FAD6E
}
