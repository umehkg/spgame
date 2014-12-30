	char myData1[0x24];
	char *myData = (char *)calloc(0x20-0x14, 0x1);

	memcpy(myData+0x14-0x14, new long(3), 4);//get code
	memcpy(myData+0x18-0x14, new long(1), 4);//get element type:0,1,2,3
	memcpy(myData+0x1C-0x14, new long(2), 4);//get card number
	memcpy(myData+0x20-0x14, new long(0), 4);//unknown

	CPacket *myPacket = new CPacket(0x4461, myData, 0x24-0x14);
	free(myData);
	myPacket->Encrypt();
	myPacket->Output( myData1, 0x24 );
