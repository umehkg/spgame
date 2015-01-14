if ( *(long*) &decryptBuff[4] == 0x4342 )
{
	long long playerCode = 12345678LL;
	long playerWhiteCards[] = {16001L, 16002L, 16003L, 16004L};
	unsigned char *myData = new unsigned char[0x58-0x14]();
	*(long *)myData = *(long *)&decryptBuff[0x14]; //item_pos
	*(long *)&myData[0x1C-0x14] = 1; //4,7,8,9; Korean msg. 1=lvlUp 5=skillUp, else:no response
	*(long *)&myData[0x20-0x14] = 7; //new item_levelIdx
	*(long *)&myData[0x24-0x14] = 36000200L; //new item_skill
	*(long *)&myData[0x28-0x14] = 1; //for skillUp, FusionResult =1
	*(long *)&myData[0x2C-0x14] = 1;
	*(long *)&myData[0x30-0x14] = 1;
	*(long *)&myData[0x34-0x14] = 1; //FusionResult? 
	*(long *)&myData[0x38-0x14] = 1; //for skillUp, FusionResult =1
	*(long long*)&myData[0x40-0x14] = playerCode;
	memcpy(&myData[0x48-0x14], &playerWhiteCards[0], 4*4);
	CPacket *myPacket = new CPacket(0x4343, myData, 0x58-0x14);
	delete myData;
	myPacket->Encrypt();
	WriteComm1((char*)myPacket->Payload(), myPacket->GetSize(), dwTimeout);
	delete myPacket;
}
