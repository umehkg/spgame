DWORD CGenericMessage::MakeDigest( void )
{
	DWORD msgDigest = *(LPDWORD)(DWORD)this+0xC;
	*(LPDWORD)this+0xC = 0; //+23CF
	MD5 *md5 = new MD5(); //see MD5 library, MD5::init() called by constructor
	DigestMsg2((char *)md5, (char *)this, *(LPDWORD)this); //+23E4 call to +44E0
	md5->transform((char *)(DWORD)md5-0x10, (char *)md5); //result stored in param1, input is param2
	char *var1 = (char *)(DWORD)md5-0x10;
	return *(LPDWORD)(DWORD)var1 ^ *(LPDWORD)(DWORD)var1+4 ^ *(LPDWORD)(DWORD)var1+8 ^ *(LPDWORD)(DWORD)var1+0xC;
}
