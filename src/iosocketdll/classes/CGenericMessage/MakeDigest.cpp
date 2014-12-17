DWORD CGenericMessage::MakeDigest( void )
{
/*
TODO:
Resolve registers in lines marked with //!!
*/
	DWORD msgDigest = *(LPDWORD)(DWORD)this+0xC;
	*(LPDWORD)this+0xC = 0; //+23CF
	MD5 *md5 = new MD5(); //see MD5 library, MD5::init() called by constructor
	call sub_44e0(edx, esi, ecx); //!!
	md5->transform(ecx, eax); //!!
	return md5->state[0]^md5->state[1]^md5->state[2]^md5->state[3];
}
