unsigned char *myData = new unsigned char [0xA8-0x14]();
//buildData

long channelFlag = (playerLevel == 0) ? 0 : (playerLevel >= 17) ? 30 : (playerLevel >= 13) ? 20 : 10;

*(long *)myData = allowPlay; //must be 01 00 00 00
*(long *)&myData[0x18-0x14] = channelFlag; //possible values: 0x0=training mode , 0xD=beginner, 0x14 = hero, 0x1E = epic
memcpy(myData+0x1C-0x14, &typePreChar, 2);//player active character (multiples of 10)
memcpy(myData+0x20-0x14, &playerLevel, 2);//player level (0~32)
*(long *)&myData[0x24-0x14] = 12; //usable character count (1~12)
*(long *)&myData[0x30-0x14] = years; //possible values: 0, 1, 7, -1 (1=valid, 7=???, -1 under-14 parent consent, 0 = noConsentCannotPlay) -1 works!
*(long long *)&myData[0x38-0x14] = typePoint; //player point
*(long long *)&myData[0x40-0x14] = typeCode; //player code (higher 4 bytes)
memcpy(myData+0x48-0x14, &typeGuild[0], 13);
memcpy(myData+0x55-0x14, &typeCash[0], 13);
*(long *)&myData[0xA0-0x14] = var2;
*(long *)&myData[0xA4-0x14] = var3;
//
CPacket *myPacket = new CPacket(0x2807, myData, 0xA8-0x14);
delete myData;
myPacket->Encrypt();	
WriteComm1((char*)myPacket->Payload(), myPacket->GetSize(), dwTimeout);
delete myPacket;
