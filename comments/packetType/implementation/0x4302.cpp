//declarations
unsigned char myData1[0x978];
char *myData = (char *)calloc(0x978-0x14, 0x1);
char *guildName = (char *)calloc(13, 1);
char *guildTitle = (char *)calloc(13, 1);
//initial values
long long playerCode = 0;
long long playerPoint = 0;
long playerLevel = 0;
long whiteCards[4] = {0, 0, 0, 0};
memcpy(guildName, "HKGolden");
memcpy(guildTitle, "Developer");
/* calculate channel flag from playerLevel */
long channelFlag = (playerLevel == 0) ? 0 : (playerLevel >= 17) ? 30 : (playerLevel >= 13) ? 20 : 10;

//build data
memcpy(myData+0x14-0x14, new long(1), 4);
memcpy(myData+0x18-0x14, guildName, 12);
free(guildName);
memcpy(myData+0x25-0x14, guildTitle, 12);
free(guildTitle);
memcpy(myData+0x32-0x14, new unsigned char(0), 12); //gender

memcpy(myData+0x34-0x14, new long(0), 4);
memcpy(myData+0x38-0x14, new long(0), 4);
memcpy(myData+0x3C-0x14, new long(0), 4);
memcpy(myData+0x40-0x14, new long(0), 4);
memcpy(myData+0x44-0x14, new long(0), 4);
memcpy(myData+0x48-0x14, new long(0), 4);

memcpy(myData+0x50-0x14, new long(0), 4);
memcpy(myData+0x54-0x14, new long(0), 4);

memcpy(myData+0x5C-0x14, new long(0), 4);

memcpy(myData+0x60-0x14, &playerPoint, 8); //player point(exp)
memcpy(myData+0x68-0x14, &playerCode, 8); //player code(money)
memcpy(myData+0x70-0x14, new long long(0), 8); //bronze coin

memcpy(myData+0x78-0x14, &playerLevel, 4); //player level (0~32 dec)
memcpy(myData+0x7C-0x14, new long(12), 4); //usable character count

memcpy(myData+0x80-0x14, new long(0), 4);
memcpy(myData+0x84-0x14, new long(0), 4);
memcpy(myData+0x88-0x14, new long(0), 4);
/* white cards */
memcpy(myData+0x8C-0x14, &whiteCards[0], 4); //water
memcpy(myData+0x90-0x14, &whiteCards[1], 4); //fire
memcpy(myData+0x94-0x14, &whiteCards[2], 4); //earth
memcpy(myData+0x98-0x14, &whiteCards[3], 4); //wind

memcpy(myData+0x9C-0x14, &channelFlag, 4); //enterable channel flag


CPacket *myPacket = new CPacket(0x4302, myData, 0x978-0x14);
free(myData);
myPacket->Encrypt();
myPacket->Output((char*)myData1, 0x978);
