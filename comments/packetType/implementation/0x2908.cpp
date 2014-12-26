	short channelType = 1;
	short channelIdx = 0;
	char channelIP[15] = "127.0.0.1";
	long channelPort = 20000;
	char channelName[28] = "Test Channel";
	char channelGuild[12] = "HKGolden";
	long channelPopulation = 0;
	long channelPopulationMax = 200;

	unsigned char unk1 = 1;
	long unk2 = -1;

	unsigned char *myData = (unsigned char*)calloc(0x68-0x14, 0x1);
	memcpy(myData+0x14-0x14, &channelType, 2);
	memcpy(myData+0x16-0x14, &channelIdx, 2);
	memcpy(myData+0x18-0x14, &channelIP, 16);
	memcpy(myData+0x28-0x14, &channelPort, 4);
	memcpy(myData+0x2C-0x14, &channelPopulation, 4);
	memcpy(myData+0x30-0x14, &channelName, 29);
	memcpy(myData+0x4D-0x14, &channelGuild, 13);
	memcpy(myData+0x5C-0x14, &channelPopulationMax, 4);
	memcpy(myData+0x60-0x14, &unk1, 1);
	memcpy(myData+0x64-0x14, &unk2, 4);
	CPacket *myPacket = new CPacket(0x2908, myData, 0x68-0x14);
	free(myData);
