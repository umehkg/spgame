//+3AD0:
__thiscall SendBuffer::SendBuffer()
{
//class constructor
	*(LPDWORD)this = (DWORD)iosocket.SendBuffer:'vftable';
	DWORD var1 = *(LPDWORD)( (DWORD)this+0x4 )
	for (int i = 0; i < 0x2000; i++)
	{
		*(LPDWORD)( (DWORD)this+0x4 + i*sizeof(DWORD) ) = 0;
	}
	*(LPDWORD)( (DWORD)this+0x8008 ) = var1;
	*(LPDWORD)( (DWORD)this+0x8004 ) = var1;
	*(LPDWORD)( (DWORD)this+0x800C ) = 0;
	*(LPBYTE)( (DWORD)this+0x8010 ) = 0;
}
