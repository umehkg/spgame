if( *(long*)&decryptBuff[4] == 0x4318)
{
  char playerUserName[13] = "usagi";
  char *myData = (char *)calloc(17, 1);
  *(long *)myData = 0;
  memcpy(myData+4, playerUserName, strlen(playerUserName)+1);
  CPacket *myPacket = new CPacket(0x4319, myData, 17);
  free(myData);
  myPacket->Encrypt();
  WriteComm1((char*)myPacket->Payload(), myPacket->GetSize(), dwTimeout);
  delete myPacket;
}
