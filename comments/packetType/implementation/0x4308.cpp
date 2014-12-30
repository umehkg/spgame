/*
  fixed data bugs
*/
      unsigned char myData1	0x6B;
			char *myData = (char *)calloc(0x6C-0x14, 0x1);
			
			//
			long roomNumber = 2;
			char roomName[0x1F] = "alanlei";
			long gameMode = 3;
			long gameMap = 2;
			long maxPlayers = 4;
			bool isPremium = true;
			

			memcpy(myData+0x14-0x14, new short(5), 2);//must be 5 
			memcpy(myData+0x18-0x14, &roomNumber, 4);//room number
			memcpy(myData+0x1C-0x14, &roomName[0], strlen(roomName)+1);//room name
			memcpy(myData+0x3C-0x14, &gameMode, 4);//game mode
			memcpy(myData+0x40-0x14, &gameMap, 4);//game map
			memcpy(myData+0x54-0x14, &maxPlayers, 4);//player number:2,4,6,8 ?
			memcpy(myData+0x58-0x14, unsigned char(1), 1);//use scrolls:0,1
			memcpy(myData+0x59-0x14, &isPremium, 1);//premium:0,1
			memcpy(myData+0x5C-0x14, new long(0), 4);//
			memcpy(myData+0x60-0x14, new long(1), 4);//auto team:0,1
			memcpy(myData+0x64-0x14, new long(5), 4);//card restriction:0~8 (1~9 ?) none: -1
			memcpy(myData+0x68-0x14, unsigned char(0), 1);//
			memcpy(myData+0x6A-0x14, unsigned char(0), 1);//
			memcpy(myData+0x6B-0x14, unsigned char(1), 1);//limit anger:0,1

			CPacket *myPacket = new CPacket(0x4308, myData, 0x6C-0x14);
			free(myData);
