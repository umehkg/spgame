if( *(long*)&decryptBuff[4] == 0x4309)
{
  char myData1[0xF0];
  char *myData = (char *)calloc(0xF0-0x14, 0x1);
  
  long playerLevel = 20;
  char playerGuild[13] = "HKGolden";
  char playerGuildDuty[14] = "Developer";

  long playerMissionLevel = 1;
  unsigned char playerGender = 0;
  long playerMainCharacter = 40; //use ordinary character codes

  long long playerCode = 10001;
  long long playerPoint = 20002;
  long long playerAvatarCoin = 30003;

  long playerWins = 0;
  long playerLoses = 0;
  long playerKOs = 0;
  long playerDowns = 0;
  
  long playerEquipItemId[4] = {1311, 1111, 1211, 5001};
  long playerEquipItemDays[4] = {1, 2, 3, 6000};
  long playerEquipItemLevelIdx[4] = {3, 2, 1, 0};
  long playerEquipItemSkill[4] = {0, 0, 0, 0};
  long playerAvatarEquipItemId[14] = {4101, 4201, 4301, 4401, 4501, 4601, 4701,
										0, 0, 0, 0, 0, 0, 0
									};

  short playerEquipMagicSkill[3] = {0, 0, 0}; //sk1, sk2, sk%
  short playerEquipWeaponSkill[3] = {100, 300, 36}; //sk1, sk2, sk%
  short playerEquipBodySkill[3] = {0, 0, 0}; //sk1, sk2, sk%

  playerEquipItemSkill[0] = playerEquipMagicSkill[2]*1000000L+playerEquipMagicSkill[0]*1000+playerEquipMagicSkill[1];
  playerEquipItemSkill[1] = playerEquipWeaponSkill[2]*1000000L+playerEquipWeaponSkill[0]*1000+playerEquipWeaponSkill[1];
  playerEquipItemSkill[2] = playerEquipBodySkill[2]*1000000L+playerEquipBodySkill[0]*1000+playerEquipBodySkill[1];
  
  memcpy(myData+0x14-0x14, new unsigned char(1), 1); //1 = UserInfoWnd
  memcpy(myData+0x15-0x14, &decryptBuff[0x18], 15);
  memcpy(myData+0x24-0x14, &playerLevel, 4);
  memcpy(myData+0x28-0x14, &playerGender, 1);
  memcpy(myData+0x29-0x14, &playerGuild[0], strlen(playerGuild)+1);
  memcpy(myData+0x36-0x14, &playerGuildDuty[0], strlen(playerGuildDuty)+1);
  memcpy(myData+0x44-0x14, &playerMainCharacter, 4);
  memcpy(myData+0x48-0x14, &playerCode, 8);
  memcpy(myData+0x50-0x14, &playerWins, 4);
  memcpy(myData+0x54-0x14, &playerLoses, 4);
  memcpy(myData+0x58-0x14, &playerKOs, 4);
  memcpy(myData+0x5C-0x14, &playerDowns, 4);
  memcpy(myData+0x60-0x14, &playerPoint, 8);
  memcpy(myData+0x68-0x14, &playerAvatarCoin, 8);
  memcpy(myData+0x70-0x14, &playerEquipItemId[0], 4*4); 
  memcpy(myData+0x80-0x14, &playerEquipItemDays[0], 4*4); 
  memcpy(myData+0x90-0x14, &playerEquipItemLevelIdx[0], 4*4); 
  memcpy(myData+0xA0-0x14, &playerEquipItemSkill, 4*4); 
  memcpy(myData+0xB0-0x14, &playerMissionLevel, 4); 
  memcpy(myData+0xB4-0x14, &playerAvatarEquipItemId[0], 14*4); 
  memcpy(myData+0xEC-0x14, new long(0), 4); 
  
  CPacket *myPacket = new CPacket(0x4310, myData, 0xF0-0x14);
  free(myData);
  myPacket->Encrypt();
  myPacket->Output( myData1, 0xF0 );
  WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
  free(myData1);
}
