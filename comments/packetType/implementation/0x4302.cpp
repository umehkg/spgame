	//declarations
unsigned char myData1[0x978];
char *myData = (char *)calloc(0x978-0x14, 0x1);
//const
const long minPointForLevelDword[29] = {-5L, 1L, 50L, 100L,
					200L, 400L, 800L, 1600L,
					2400L, 3200L, 6400L, 12800L,
					25600L, 51200L, 102400L, 204800L,
					409600L, 819200L, 1638400L, 3276800L,
					6553600L, 13107200L, 26214400L, 52428800L,
					104857600L, 209715200L, 419430400L, 838860800L,
					1677721600L};
const long long minPointForLevelQword[4] = {3355443200LL, 6710886400LL, 13421772800LL, 26843545600LL};
//initial values

/* max playerCardCount = 96 */
unsigned char playerCardItemExist[] = {1, 1, 1, 1};

long playerCardItemId[] = {1111, 1211, 1311, 1322};
long playerCardItemDays[] = {1, 1, 1, 1};
long playerCardItemLevelIdx[] = {3, 4, 7, 8};
long playerCardItemSkill[] = {36100300L, 0, 33200000L, 0};

char guildName[13] = "HKGolden";
char guildTitle[13] = "Developer";
long long playerCode = 1234567;
long long playerPoint = 7654321;
long playerLevel = 30;
long playerInventorySlots = 18;
long playerType = 1; //set to 7 for GM...
long whiteCards[4] = {10, 20, 30, 40};
long scrolls[3] = {0, 0, 0};
long playerWins = 0;
long playerLoses = 0;
long playerKOs = 0;
long playerDowns = 0;
//
long lobbyMaxRooms = 300;
/* calculate channel flag from playerLevel */
long channelFlag = (playerLevel == 0) ? 0 : (playerLevel >= 17) ? 30 : (playerLevel >= 13) ? 20 : 10;

//build data
memcpy(myData+0x14-0x14, new long(1), 4);
memcpy(myData+0x18-0x14, guildName, strlen(guildName)+1);
memcpy(myData+0x25-0x14, guildTitle, strlen(guildTitle)+1);
memcpy(myData+0x32-0x14, new unsigned char(0), 1); //gender

memcpy(myData+0x34-0x14, &playerWins, 4);
memcpy(myData+0x38-0x14, &playerLoses, 4);
memcpy(myData+0x3C-0x14, new long(0), 4);
memcpy(myData+0x40-0x14, new long(0), 4);
memcpy(myData+0x44-0x14, &playerKOs, 4);
memcpy(myData+0x48-0x14, &playerDowns, 4);

memcpy(myData+0x50-0x14, new long(0), 4);
memcpy(myData+0x54-0x14, new long(0), 4);

memcpy(myData+0x5C-0x14, new long(0), 4);

memcpy(myData+0x60-0x14, &playerPoint, 8); //player point(exp)
memcpy(myData+0x68-0x14, &playerCode, 8); //player code(money)
memcpy(myData+0x70-0x14, new long long(0), 8); //bronze coin

memcpy(myData+0x78-0x14, &playerLevel, 4); //player level (0~32 dec)
memcpy(myData+0x7C-0x14, new long(12), 4); //usable character count

memcpy(myData+0x80-0x14, &scrolls[0], 4); //scroll1
memcpy(myData+0x84-0x14, &scrolls[1], 4); //scroll2
memcpy(myData+0x88-0x14, &scrolls[2], 4); //scroll3
/* white cards */
memcpy(myData+0x8C-0x14, &whiteCards[0], 4); //water
memcpy(myData+0x90-0x14, &whiteCards[1], 4); //fire
memcpy(myData+0x94-0x14, &whiteCards[2], 4); //earth
memcpy(myData+0x98-0x14, &whiteCards[3], 4); //wind

memcpy(myData+0x9C-0x14, &channelFlag, 4); //enterable channel flag
memcpy(myData+0xA0-0x14, &playerCardItemExist[0], sizeof(playerCardItemExist)); //param1 of call sub_473430

memcpy(myData+0x280-0x14, &playerCardItemId[0], 4*sizeof(playerCardItemId)); //param2 of call sub_473430
memcpy(myData+0x400-0x14, &playerCardItemDays[0], 4*sizeof(playerCardItemDays)); //param3 of call sub_473430
memcpy(myData+0x580-0x14, &playerCardItemLevelIdx[0], 4*sizeof(playerCardItemLevelIdx)); //param4 of call sub_473430
memcpy(myData+0x700-0x14, &playerCardItemSkill[0], 4*sizeof(playerCardItemSkill)); //param5 of call sub_473430

memcpy(myData+0x880-0x14, &playerInventorySlots, 4);

memcpy(myData+0x884-0x14, &minPointForLevelDword[0], 4*29);
memcpy(myData+0x8F8-0x14, &minPointForLevelQword[0], 4*8);

memcpy(myData+0x94C-0x14, &lobbyMaxRooms, 4);
memcpy(myData+0x974-0x14, &playerType, 4);


CPacket *myPacket = new CPacket(0x4302, myData, 0x978-0x14);
free(myData);
myPacket->Encrypt();
myPacket->Output((char*)myData1, 0x978);
