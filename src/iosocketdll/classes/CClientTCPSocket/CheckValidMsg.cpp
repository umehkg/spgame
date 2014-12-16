//CGenericRcvMsg inherits CGenericMessage inherits CClientObject
bool CClientTCPSocket::CheckValidMsg(class CGenericRcvMsg *param1)
{
	unsigned long msgSize = param1->GetSize();
	if ( (msgSize < 0x14)||(msgSize < 0x4014) )
	{
		call near ptr 0FBD15A0h ( ds:0x15B5000, 0, 0x15B5B20, param1->GetType(), msgSize ); //error handler (guessed)
		return;
	}
	else
	{
		if ( param1->CheckCheckSum() )
		{
			call near ptr 0FBD15A0h ( ds:0x15B5000, 0, 0x15B5B20, param1->GetType() );
			return false;
		}
		else //if ( param1->CheckCheckSum() == 0 )
		{
			if ( *(BYTE *)param1+0x10 == 0) //LHS guessed
			{
				return true;
			}
			else
			{
				if ( param1->GetState() != -1 )
				{
					if ( param1->GetRcvServerState() == param1->GetState() ) //LHS guessed
					{
						param1->UpdateRcvServerState();
						return true;
					}
					else
					{
						call near ptr 0FBD15A0h ( ds:0x15B5000, 0, 0x15B5B20, param1->GetType(), param1->GetState(), ?->GetRcvServerState() );
						return false;
					}
				}
				else //if ( param1->GetState() == -1 )
				{
					//+2cd9
					if ( *(DWORD *)param1+0xC04C >= 5) //LHS guessed
					{
						return true;
					}
					else
					{
						call near ptr 0FBD15A0h ( ds:0x15B5000, 0, 0x15B5B20, param1->GetType() );
						return false;
					}
				}
			}
			
		}
	}
}
