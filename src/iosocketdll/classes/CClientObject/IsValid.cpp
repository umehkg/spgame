bool __thiscall CClientObject::IsValid()
{
	if (*(LPBYTE)(DWORD)this+4 == 0)
		return false;
	if (*(LPDWORD)(DWORD)this+8 == 0xFFFFFFFF)
		return false;
	return true;
}
