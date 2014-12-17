CServerTCPSocket::SendLoop(CClientObject &param1, char* param2, int param3) //+2D50:
{
	if (*(LPDWORD)(DWORD)this+4 != 0xFFFFFFFF)
	{
		if(!param1->IsValid())
			return false;
		if (param1->GetSndServerState() == -1)
		{
			//+2D7D:
			param1->SetSndServerState( *(int *)(DWORD)param1+0x8 );
			param1->SetRcvServerState( *(int *)(DWORD)param1+0x8 );
			param1->UpdateRcvServer();
		}
		//+2D9A:
		(CGenericMessage *)param2->SetState( param1->GetSndServerState() );
		if ( (CGenericMessage *)param2->GetSize() == param3 )
		{
			//+2DE7:
			if( (param3 >= 0x14)&&(param3 <= 0x4014) )
			{
				(CGenericMessage *)param2->EncryptMsg();
				param1->UpdateSndServerState();
				bool var1 = (SendBuffer *)(DWORD)param1+0xC->EnqueueData(param1, param3);
				DecryptBody((char *)(DWORD)param2+4, (CGenericMessage *)param2->GetSize()-4)
				if (var1)
				{
					if ( this->BufferSendLoop(param1) )
						return true; //+2E3D
				}
				else
				{
					//+2E46:
					logdll.CLog::PrintTimeAndLog(*(LPDWORD)(void *)0x15B5000,0,0x15B59C0,0xBB,0x15B5B6C,(CGenericMessage *)param2->GetType());
				}
				//+2E6F:
				(SendBuffer *)(DWORD)param1+0xC->~SendBuffer(); //(guessed) Ref: call dword ptr [edx+8]
				return false;
			}
			else
			{
				//+2E84:
				logdll.CLog::PrintTimeAndLog(*(LPDWORD)(void *)0x15B5000,0,0x15B5B38,param3);
				return false;
			}
		}
		else
		{
			//+2DBE:
			logdll.CLog::PrintTimeAndLog(*(LPDWORD)(void *)0x15B5000,0,0x15B5B90,(CGenericMessage *)param2->GetSize(),param3); //Error log
			return false;
		}
	}
	else
	{
		//+2EA5:
		return false;
	}
}
