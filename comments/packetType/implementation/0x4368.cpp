/* sendPacket 0x4368 - response to packetType 0x4367 */
unsigned char myData1[0x698];
char *myData = (char *)calloc(0x698-0x14, 0x1);
unsigned long shopResult = 0;
long long playerCode = 123000;
long long playerCash = 456789;
long long playerAvatarCoin = 2015;
long playerSlotCount = 12;
unsigned char inventoryItemExist[4] = {1, 1, 1, 1};
//max 96!!
long inventoryItemId[] = {1111, 1112, 1113, 1114};
long inventoryItemDays[] = {0, 30, 90, 365};
long inventoryItemLevelIdx[] = {0, 4, 7, 8};
long inventoryItemSk2Type[] = {0, 400, 401, 402};
memcpy(myData+0x14-0x14, &shopResult, 4);
memcpy(myData+0x18-0x14, &inventoryItemExist[0], sizeof(inventoryItemExist));
memcpy(myData+0x78-0x14, &inventoryItemId[0], sizeof(inventoryItemId));
memcpy(myData+0x1F8-0x14, &inventoryItemDays[0], sizeof(inventoryItemDays));
memcpy(myData+0x378-0x14, &inventoryItemLevelIdx[0], sizeof(inventoryItemLevelIdx));
memcpy(myData+0x4F8-0x14, &inventoryItemSk2Type[0], sizeof(inventoryItemSk2Type));
memcpy(myData+0x678-0x14, &playerSlotCount, 4);
memcpy(myData+0x680-0x14, &playerCode, 8);
memcpy(myData+0x688-0x14, &playerCash, 4);
memcpy(myData+0x690-0x14, &playerAvatarCoin, 8);
CPacket *myPacket = new CPacket(0x4368, myData, 0x698-0x14);
myPacket->Encrypt();
myPacket->Output((char*)myData1, 0x698);
