bool __thiscall CClientTCPSocket::ReceiveLoop(DWORD param1) //+1FF0
{
/*
	Simplified version with no error handling analysis
*/
	char *var1 = (char *)(DWORD)this+0x4028;
	int var2 = *(int *)(DWORD)this+0x14;
	int var3 = ws2_32.recv((SOCKET)param1, (char *)(DWORD)var1+var2 ,0x4000-*(LPDWORD)var1, 0);
	if ( var3 > 0)
	{
		if ( ws2_32.WSAGetLastError() == 0x2733)		//WSAEWOULDBLOCK
			return true;
		return false;
	}
	else
	{
		(RecvBuffer *)&var2->UpdateRecvData( var3 );
	}
	return true;
}
