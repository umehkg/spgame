bool __thiscall CGenericMessage::CheckCheckSum() //+2440
{
	DecryptBody( (char *)(this+4) ,*(LPDWORD)this - 4);
	if ( this->MakeDigest() == *(LPDWORD)(this+0xC) )
		return false;
	return true;
}
