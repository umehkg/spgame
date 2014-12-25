	unsigned char myData1[0xB0];
	char *myData = (char *)calloc(0xB0-0x14, 0x1);
	//knowns
	long roomIdx = 0;
	char roomName [28] = "HKGoldenTest";
	long roomType = 20;
	long roomMap = 20;
	long roomMaxPlayers = 8;
	long roomPlayers = 4;
	long playerCharIcons [16] = {10,140,20,150, 0,0,0,0, 0,0,0,0, 0,0,0,0};
	unsigned char isLocked = false;
	unsigned char isPotionAllowed =  false;
	unsigned char isPremium = true;
	unsigned char isAutoTeam = false;
	unsigned char isShield = true;
	long cardRestriction = -1; //no restriction: -1
	//unknowns
	unsigned char unk1 = false;
	char unk2[12] = "";
	unsigned char unk3 = false;
	unsigned char unk4 = false;
	unsigned char unk5 = false;

	//buildData
	memcpy(myData+0x14-0x14, new long(1), 4);
	memcpy(myData+0x18-0x14, &roomIdx, 4);
	memcpy(myData+0x1C-0x14, &roomName[0], 29);
	memcpy(myData+0x3C-0x14, &roomType, 4);
	memcpy(myData+0x40-0x14, &roomMap, 4);
	memcpy(myData+0x44-0x14, &roomPlayers, 4);
	memcpy(myData+0x48-0x14, &roomMaxPlayers, 4);
	memcpy(myData+0x4C-0x14, &isLocked, 1);
	memcpy(myData+0x4D-0x14, &isPotionAllowed, 1);
	memcpy(myData+0x4E-0x14, &unk1, 1);
	memcpy(myData+0x4F-0x14, &isPremium, 1);
	memcpy(myData+0x50-0x14, &isAutoTeam, 1);
	memcpy(myData+0x54-0x14, &cardRestriction, 4);
	memcpy(myData+0x58-0x14, &playerCharIcons[0], 4*16);
	memcpy(myData+0x98-0x14, &unk2[0], 13);
	memcpy(myData+0xAC-0x14, &unk3, 1);
	memcpy(myData+0xAD-0x14, &isShield, 1);
	memcpy(myData+0xAE-0x14, &unk4, 1);
	memcpy(myData+0xAF-0x14, &unk5, 1);
	//
	CPacket *myPacket = new CPacket(0x4304, myData, 0xB0-0x14);
	free(myData);
	myPacket->Encrypt();
	myPacket->Output( (char*)myData1, 0xB0 );
