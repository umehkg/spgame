DWORD CGenericMessage::MakeDigest( void )
{
/*
TODO:
Resolve registers in lines marked with //!!
*/
	DWORD msgDigest = *(LPDWORD)(DWORD)this+0xC;
	*(LPDWORD)this+0xC = 0; //+23CF
	MD5 *md5 = new MD5(); //see MD5 library, MD5::init() called by constructor
	DigestMsg2((char *)md5, (char *)this, *(LPDWORD)this); //!! +23E4 call to +44E0
	md5->transform(esp?+0x1C, esp?+0x28); //!!
	return md5->state[0] ^ md5->state[1] ^ md5->state[2] ^ md5->state[3];
}
