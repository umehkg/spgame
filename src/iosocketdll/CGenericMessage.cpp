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
	bool CheckCheckSum();
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
	*(DWORD *)(LPVOID)ecx = param1;
	*(DWORD *)(LPVOID)ecx+4 = param2;
	*(DWORD *)(LPVOID)ecx+8 = 0x2B1C;
}
bool CGenericMessage::CheckError()
{
	if( *(DWORD *)(LPVOID)ecx+8 != 0x2B1C )
		return true;
	return false;
}
void CGenericMessage::SetState(int param1)
{
	*(DWORD *)(LPVOID)ecx+0x10 = param1;
}
int CGenericMessage::GetState()
{
	return *(DWORD *)(LPVOID)ecx+0x10;
}
unsigned long CGenericMessage::GetType()
{
	return *(DWORD *)(LPVOID)ecx+4;
}
unsigned long CGenericMessage::GetSize()
{
	return *(DWORD *)(LPVOID)ecx;
}
unsigned long CGenericMessage::MakeDigest()
{
	//todo
}
bool CGenericMessage::CheckCheckSum()
{
	//todo stuffs 
	if (this.MakeDigest() != *(DWORD *)(LPVOID)esi+0xC)
		return false;
	
}
