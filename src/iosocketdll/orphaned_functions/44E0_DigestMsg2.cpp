void DigestMsg2(char *param1, int packetSize)
{
//Ref: iosocketdll.dll+44E0
	//param1 same as in DigestMsg
	DWORD eax = *(DWORD *)param1+0x10;
	ecx = eax + packetSize*8;
	*(DWORD *)param1+0x10 = ecx;
	if (ecx < eax)
		*(DWORD *)(param1+0x14)++;
	eax >>= 3;
	eax &= 0x3F;
	*(DWORD *)param1+0x14 += packetSize>>0x1D;
	if (ecx != eax)
	{
		char *esi = packet;
		
	}
	else //(ecx == eax)
	{
		if (packetSize >= 0x40)
		{
			*(DWORD *)? = packetSize>>6;
			eax = *(DWORD *)param1+0x1C
		}
		memcpy(param1+0x18, packet, 0x40);

	}
}
