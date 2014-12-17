#include "md5.h"
DWORD CGenericMessage::MakeDigest( void )
{
	char buf[0x11];
	md5_raw(buf, this, *(LPDWORD)this);
	return *(LPDWORD)buf ^ *(LPDWORD)(buf+4) ^ *(LPDWORD)(buf+8) ^ *(LPDWORD)(buf+0xC);
}
