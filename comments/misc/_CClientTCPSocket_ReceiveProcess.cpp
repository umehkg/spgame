char __thiscall CClientTCPSocket::ReceiveProcess(void *this, int a2)
{
  void *v2; // esi@1
  char result; // al@2

  v2 = this;
  if ( (unsigned __int8)(iosocketdll.CClientTCPSocket::ReceiveLoop(a2) )
  {
    while ( *((_DWORD *)v2 + 4106) > 0 )
    {
      if ( (unsigned __int8)RecvBuffer::IsAllRecvMsg((char *)v2 + 20) != 1 )
        break;
      if ( (unsigned __int8)CClientTCPSocket::CheckValidMsg((char *)v2 + 20) )
        (*(void (__thiscall **)(void *, char *))(*(_DWORD *)v2 + 20))(v2, (char *)v2 + 20);
      RecvBuffer::UpdateBuffer((char *)v2 + 20);
    }
    result = 1;
  }
  else
  {
    v11818C0(dword_15B5000, 0, 22761868, 234, 22762292);
    RecvBuffer::InitBuffer((char *)v2 + 20);
    result = 0;
  }
  return result;
}
