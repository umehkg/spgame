//CreateRoom
if( *(long*)&decryptBuff[4] == 0x4307 ){
			unsigned char myData1[0x6C];
			char *myData = (char *)calloc(0x6B-0x14, 0x1);

			char roomName[0x20];
			long roomIdx = *(long *)&decryptBuff[0x14];
			long roomMode = *(long *)&decryptBuff[0x38];
			long roomMap = *(long *)&decryptBuff[0x3C];
			char roomPword[0x10];
			long roomMaxPlayers = *(long *)&decryptBuff[0x50];

			memcpy(&roomName[0], &decryptBuff[0x18], 0x20);
			memcpy(&roomPword[0], &decryptBuff[0x40], 0x10);
			
			unsigned char unk3 = *(unsigned char *)&decryptBuff[0x54];
			unsigned char unk4 = *(unsigned char *)&decryptBuff[0x55];
			unsigned char unk5 = *(unsigned char *)&decryptBuff[0x56];
			unsigned char unk6 = *(unsigned char *)&decryptBuff[0x57];
			
			long unk1 = *(long *)&decryptBuff[0x58];
			long unk2 = *(long *)&decryptBuff[0x5C];
			
      
			memcpy(myData+0x14-0x14, new short(5), 2);//must be 5 
			memcpy(myData+0x18-0x14, &roomIdx, 4);//room number
			memcpy(myData+0x1C-0x14, roomName, strlen(roomName)+1);//room name
			memcpy(myData+0x3C-0x14, &roomMode, 4);//game mode
			memcpy(myData+0x40-0x14, &roomMap, 4);//game map
			memcpy(myData+0x54-0x14, &roomMaxPlayers, 4);//player number:2,4,6...
			memcpy(myData+0x58-0x14, new long(1), 4);//use scrolls:0,1
			memcpy(myData+0x59-0x14, new long(1), 4);//premium:0,1
			memcpy(myData+0x5C-0x14, new long(0), 4);//unknown
			memcpy(myData+0x60-0x14, new long(1), 4);//auto team:0,1
			memcpy(myData+0x64-0x14, &unk1, 4);//card restriction:0,1,2,3...
			memcpy(myData+0x68-0x14, new long(0), 4);//unknown
			memcpy(myData+0x6A-0x14, new unsigned char(0), 1);//unknown
			memcpy(myData+0x6B-0x14, new unsigned char(1), 1);//limit anger:0,1

			CPacket *myPacket = new CPacket(0x4308, myData, 0x6C-0x14);
			free(myData);
			myPacket->Encrypt();
			myPacket->Output( (char*)myData1, 0x6C );
			WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
}
