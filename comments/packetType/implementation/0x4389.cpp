if( *(long*)&decryptBuff[4] == 0x4388)
{

	unsigned char myData1[0xF0];
	char *myData = (char *)calloc(0x30-0x14, 0x1);

  char siegeGuilds[10][13] = { "HKGolden", "g2", "g3", "g4", "g5",
                              "g6", "g7", "g8", "g9", "g10"
                              };
                              
  long siegePoints[10] = {20150109, 119, 98, 87, 76, 65, 54, 43, 32, 11};
  long siegeRankChange[10] = {9, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  long myGuildRankIdx = 0;
  long myGuildPoints = 20150109;

	memcpy(myData+0x14-0x14, &siegeGuilds[0][0], 13*10);
	memcpy(myData+0x98-0x14, &siegePoints[0], 4*10);
	memcpy(myData+0xC0-0x14, &siegeRankChange[0], 4*10);
	memcpy(myData+0xE8-0x14, &myGuildRankIdx, 4);
	memcpy(myData+0xEC-0x14, &myGuildPoints, 4);
	CPacket *myPacket = new CPacket(0x4389, myData, 0xF0-0x14);
	myPacket->Encrypt();
	myPacket->Output((char*)myData1, 0xF0);
	WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
}
