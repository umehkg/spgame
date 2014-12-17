//[iosocketdll.dll]
class CGenericMessage
{
	private:
	DWORD m_msgLength;
	DWORD m_msgType;
	DWORD m_msgMagicNum;
	DWORD m_msgCheckSum;
	DWORD m_msgState;
	
	public:
	CGenericMessage();
	void SetBasicHeader(int, ulong);
	bool CheckError();
	void SetState(int);
	int GetState();
	unsigned long GetType();
	unsigned long GetSize();
	unsigned long MakeDigest();
	void EncryptMsg();
}
CGenericMessage::CGenericMessage()
{
	//constructor
	m_msgLength = 0;
	m_msgMagicNum = 0;
	m_msgType = 0;
	m_msgCheckSum = 0;
}
void CGenericMessage::SetBasicHeader(int param1, ulong param2)
{
//ecx: packet buffer?
	*(DWORD *)this = param1;
	*(DWORD *)(this+4) = param2;
	*(DWORD *)(this+8) = 0x2B1C;
}
bool CGenericMessage::CheckError()
{
	if( *(DWORD *)(this+8) != 0x2B1C )
		return true;
	return false;
}
void CGenericMessage::SetState(int param1)
{
	*(DWORD *)(this+0x10) = param1;
}
int CGenericMessage::GetState()
{
	return *(DWORD *)(this+0x10);
}
unsigned long CGenericMessage::GetType()
{
	return *(DWORD *)(this+4);
}
unsigned long CGenericMessage::GetSize()
{
	return *(DWORD *)this;
}
void __thiscall CGenericMessage::EncryptMsg()
{
	*(LPDWORD)(this+0xC) = this->MakeDigest();
	Encrypt((char *)(this+0x4), *(LPDWORD)this);
}
