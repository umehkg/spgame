void sub_6F9FC0_HandlePacket(CGenericMessage *recvPacket)
{
	if ( recvPacket->CheckError() )
		return;
	if ( *(LPDWORD)0x7E00D0 == 4 )//GameState == 4
	{
		if ( *(long *)(recvPacket+0x14) != -1  //unsigned 0xFFFFFFFF
			if ( *(long *)(recvPacket+0x18) != -1 )
				if ( *(long *)(recvPacket+0x1C) != -1 )
					if ( *(long *)(recvPacket+0x20) != -1 )
					{
						//setting data
						*(long *)( *(long *)0x7EF97C+0x156C ) = 0x1; //existing
						*(long *)( *(long *)0x7EF97C+0x15CC ) = *(long *)(recvPacket+0x14); //itemid\1
						*(long *)( *(long *)0x7EF97C+0x18CC ) = *(long *)(recvPacket+0x18); //itemlv-1\1
						*(long *)( *(long *)0x7EF97C+0x156D ) = 0x1; //existing
						*(long *)( *(long *)0x7EF97C+0x15D0 ) = *(long *)(recvPacket+0x1C); //itemid\2
						*(long *)( *(long *)0x7EF97C+0x18D0 ) = *(long *)(recvPacket+0x20); //itemlv-1\2
						//
						void *obj;
						obj = sub_659B50();
						if ( sub_659B50() == NULL )
							return;
						sub_72DA80(obj, 0x25); //!!
						sub_72DA80(obj, 0x81); //!!
						if ( ??? == NULL )//!!
							return;
						//TODO:
						//GetItemIdElementType //var_88
						CardItem->sub_69C600(3, *(long *)(recvPacket+0x14), *(long *)(recvPacket+0x1C))
						//...
						CryptUserInfo *cardCount;
						select (elemSwitch)
						{
							case 0: //water
								cardCount = (CryptUserInfo *)( *(long *)0x7EF97C+0x110C );
								break;
							case 1: //fire
								cardCount = (CryptUserInfo *)( *(long *)0x7EF97C+0x11E0 );
								break;
							case 2: //earth
								cardCount = (CryptUserInfo *)( *(long *)0x7EF97C+0x12B4 );
								break;
							case 3: //wind
								cardCount = (CryptUserInfo *)( *(long *)0x7EF97C+0x1388 );
								break;
							default:
						}
						cardCount->sub_4B4310();
						*(LPBYTE)0x822EB4 = 0;
						if ( *(long *)(recvPacket+0x20) == -1) //esi = 0xFFFFFFFF
							return;
						*(long *)( *(long *)0x7EF97C+0x156E ) = 0; //bl =0x00
						*(long *)( *(long *)0x7EF97C+0x15D4 ) = *(long *)(recvPacket+0x28); //
						*(long *)( *(long *)0x7EF97C+0x1754 ) = 0x1770;//dec = 6000
						if ( *(long *)(recvPacket+0x28) == 0 )//ebp = 0
							return;
						sub_69E669(...); //!!
					}
	}
	*(LPBYTE)0x8223B3 = 1;
}
