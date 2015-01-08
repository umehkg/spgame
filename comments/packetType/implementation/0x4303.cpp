	unsigned char myData1[0x3C];
	char *myData = (char *)calloc(0x3C-0x14, 0x1);

  char unk1[16] = "";
  long param1 = 0;
  long param2 = 0;
  long param3 = 0;
  unsigned char param4 = 0;
  unsigned char unk2 = 0; //0 or 1
  long param5 = 0;
  long param6 = 0;
  
	//buildData
	memcpy(myData+0x14-0x14, &unk1[0], 16);
	memcpy(myData+0x24-0x14, &param1, 4);
	memcpy(myData+0x28-0x14, &param2, 4);
	memcpy(myData+0x2C-0x14, &param3, 4);
	memcpy(myData+0x30-0x14, &param4, 1);
	memcpy(myData+0x31-0x14, &unk2, 1);
	memcpy(myData+0x34-0x14, &param5, 4);
	memcpy(myData+0x38-0x14, &param6, 4);	
	//
	CPacket *myPacket = new CPacket(0x4303, myData, 0x3C-0x14);
	free(myData);
	myPacket->Encrypt();
	myPacket->Output( (char*)myData1, 0x3C );
