char __thiscall CClientTCPSocket::EvaluateSocket(void *this, int a2, int a3)
{
  void *v3; // esi@1
  char result; // al@3
  int v5; // edx@6
  int v6; // eax@8

  v3 = this;
  switch ( (unsigned __int16)a3 )
  {
    case 0x10u:
      if ( ws2_32.WSAAsyncSelect(*((_DWORD *)this + 1), *((_DWORD *)this + 2), *((_DWORD *)this + 3), FD_READ|FD_WRITE|FD_CLOSE) != -1 ) //call +4662
        goto LABEL_11;
      v11815A0(dword_15B5000, 0, 22762140); //logdll.CLog::PrintTimeAndLog
      result = 0;
      break;
    case 0x20u:
      if ( *((_DWORD *)this + 1) != -1 )
        unk_15B4650(*((_DWORD *)this + 1));
      v5 = *(_DWORD *)v3;
      *((_DWORD *)v3 + 1) = -1;
      *((_BYTE *)v3 + 16) = 0;
      (*(void (__thiscall **)(void *))(v5 + 16))(v3);
      result = 1;
      break;
    case 2u:
      if ( *((_BYTE *)this + 16) )
      {
        CClientTCPSocket::BufferSendLoop();
        result = 1;
      }
      else
      {
        v6 = *(_DWORD *)this;
        *((_BYTE *)this + 16) = 1;
        (*(void (**)(void))(v6 + 12))();
        result = 1;
      }
      break;
    case 1u:
      (*(void (__cdecl **)(int))(*(_DWORD *)this + 8))(a3);
      goto LABEL_11;
    default:
LABEL_11:
      result = 1;
      break;
  }
  return result;
}
