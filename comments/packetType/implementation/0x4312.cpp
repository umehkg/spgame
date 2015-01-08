	unsigned char myData1[0xCC];
	char *myData = (char *)calloc(0xCC-0x14, 0x1);
	//knowns
	  long playerLevelList[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	  unsigned char playerGenderList[8] = {0, 1, 0, 1, 0, 1, 0, 1};
	  unsigned char playerNameList[8][13] = {"playerOne",
	                                        "playerTwo",
	                                        "player3",
	                                        "p4RoomOwner",
	                                        "player5",
	                                        "player6",
	                                        "player7",
	                                        "player8"
	                                        };
	  long playerIdxList[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	  long roomOwnerIdx = 3;
	//buildData
	memcpy(myData+0x14-0x14, new long(0), 4);
	memcpy(myData+0x18-0x14, &playerLevelList[0], 4*8);
	memcpy(myData+0x38-0x14, &playerGenderList[0], 8);
	memcpy(myData+0x40-0x14, &playerNameList[0][0], 13*8);
	memcpy(myData+0xA8-0x14, &playerIdxList[0], 4*8);
	memcpy(myData+0xC8-0x14, &roomOwnerIdx, 4);
	//
	CPacket *myPacket = new CPacket(0x4312, myData, 0xCC-0x14);
	free(myData);
	myPacket->Encrypt();
	myPacket->Output( (char*)myData1, 0xCC );
