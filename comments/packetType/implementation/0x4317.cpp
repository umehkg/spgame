	unsigned char myData1[0x11C];
	char *myData = (char *)calloc(0x11C-0x14, 0x1);

	char guildTitle[13] = "God";
	char playerName[13] = "alanlei";
	char guildName[13] = "HKGolden";

	memcpy(myData+0x14-0x14, new short(1), 2);//character position:valid(1)
	memcpy(myData+0x18-0x14, "10.10.174.1", 16);//game server ip
	memcpy(myData+0x28-0x14, new long(1235), 4);//game server port
	memcpy(myData+0x38-0x14, new long(30), 4);//player level
	memcpy(myData+0x3C-0x14, playerName, strlen(playerName)+1);//player name
	memcpy(myData+0x49-0x14, guildName, strlen(guildName)+1);//guild name
	memcpy(myData+0x56-0x14, guildTitle, strlen(guildTitle)+1);//guild title
	
	memcpy(myData+0x63-0x14, new unsigned char(0), 1);//gender:0(F),1(M)
	memcpy(myData+0x64-0x14, new long(0), 4);
	memcpy(myData+0x70-0x14, new long(0), 4);//ready:0,1
	memcpy(myData+0x74-0x14, new long(20), 4);//character:0,10,20...
	memcpy(myData+0x78-0x14, new long(0), 4);
	
	memcpy(myData+0x7C-0x14, new long(0), 4);//random character:0,1(0x78)
	memcpy(myData+0x80-0x14, new long(0), 4);
	memcpy(myData+0x84-0x14, new long(4), 4);//ko number
	memcpy(myData+0x88-0x14, new long(0), 4);
	memcpy(myData+0x8C-0x14, new short(1), 2);//game or room:0,1
	
	memcpy(myData+0x90-0x14, new long(0), 4);
	memcpy(myData+0x94-0x14, new long(0), 4);
	memcpy(myData+0x98-0x14, new long(0), 4);
	memcpy(myData+0xA0-0x14, new long(0), 4);
	memcpy(myData+0xA4-0x14, new long(0), 4);
	memcpy(myData+0xA8-0x14, new long(0), 4);
	memcpy(myData+0xB0-0x14, new long(0), 4);
	memcpy(myData+0xB4-0x14, new long(0), 4);
	memcpy(myData+0xB8-0x14, new long(0), 4);
	memcpy(myData+0xC0-0x14, new long(0), 4);
	memcpy(myData+0xC4-0x14, new long(0), 4);
	memcpy(myData+0xD0-0x14, new long(0), 4);
	memcpy(myData+0xD4-0x14, new long(0), 4);
	memcpy(myData+0xD8-0x14, new long(0), 4);
	memcpy(myData+0xDC-0x14, new short(0), 2);
	memcpy(myData+0xDE-0x14, new long(0), 4);
	memcpy(myData+0xE0-0x14, new long(0), 4);
	memcpy(myData+0xE4-0x14, new long(0), 4);
	memcpy(myData+0xE8-0x14, new long(0), 4);
	memcpy(myData+0xEC-0x14, new long(0), 4);
	memcpy(myData+0xF0-0x14, new long(0), 4);
	memcpy(myData+0xF4-0x14, new long(0), 4);
  memcpy(myData+0x101-0x14, new short(0), 2);
	memcpy(myData+0x103-0x14, new long(0), 4);
	memcpy(myData+0x104-0x14, new long(0), 4);
	memcpy(myData+0x108-0x14, new long(0), 4);
	memcpy(myData+0x10C-0x14, new long(0), 4);
	memcpy(myData+0x110-0x14, new long(0), 4);
	CPacket *myPacket = new CPacket(0x4317, myData, 0x11C-0x14);
	free(myData);

	myPacket->Encrypt();
	myPacket->Output( (char*)myData1, 0x11C );
