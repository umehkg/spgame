void DigestMsg2(char *md5, char *packet, int packetSize)
{
//Ref: iosocketdll.dll+44E0
	char *ebx = md5; //+44E1
	DWORD eax = *(LPDWORD)(DWORD)param1+0x10; //+44E5
	ecx = eax + packetSize*8; //+44ED
	*(LPDWORD)(DWORD)md5+0x10 = ecx; //+44F4
	if (ecx < eax) //+44F0
		( *(LPDWORD)(DWORD)md5+0x14)++;
	esi = *(DWORD *)(DWORD)md5+0x14;
	eax >>= 3;
	eax &= 0x3F;
	*(DWORD *)param1+0x14 += packetSize>>0x1D; //+450C
	if (ecx != eax)
	{
		char *esi = packet;
		ecx = 0x40;
		ecx -= eax;
		edi = eax+ebx+0x18;
		*(LPDWORD)(DWORD)md5+0x14 = ecx;
		if (ebp >= ecx)
		{
			eax = ecx;
			ecx >>= 2;
			for (int i=0; i<ecx; i++)
				*(LPDWORD)(DWORD)edi+i = *(LPDWORD)(DWORD)esi+i; //+452D
			ecx = eax;
			ecx &= 0x3;
			for (int i=0; i<ecx; i++)
				*(LPBYTE)(DWORD)edi+i = *(LPBYTE)(DWORD)esi+i;
			this->MakeDigest(ebx, ecx);
			//TODO:
		}
		else
		{
		//+459B
		}
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
