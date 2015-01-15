if ( *(long*) &decryptBuff[4] == 0x4467 )
{
	unsigned char *myData = new unsigned char[0x20-0x14];
	*(long *)myData = 1;
	*(long *)&myData[4] = *(long *)&decryptBuff[0x14];
	*(long *)&myData[8] = 24; //max 96
	CPacket *myPacket = new CPacket(0x4468, myData, 0x20-0x14);
	delete myData;
	myPacket->Encrypt();
	WriteComm1((char*)myPacket->Payload(), myPacket->GetSize(), dwTimeout);
	delete myPacket;
}
