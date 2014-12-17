DWORD CGenericMessage::MakeDigest( void )
{
	DWORD msgDigest = *(LPDWORD)(DWORD)this+0xC;
	*(LPDWORD)this+0xC = 0; //+23CF
	MD5 *md5 = new MD5(); //see MD5 library, MD5::init() called by constructor
	DigestMsg2((char *)md5, (char *)this, *(LPDWORD)this); //+23E4 call to +44E0
	md5->transform((char *)(DWORD)md5-0x10, (char *)md5);
	return md5->state[0] ^ md5->state[1] ^ md5->state[2] ^ md5->state[3];
}
