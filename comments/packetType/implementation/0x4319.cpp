if( *(long*)&decryptBuff[4] == 0x4318)
{

  unsigned char myData1[0x1C];
  char *myData = (char *)calloc(8, 1);
  memcpy(myData, new long(0), 4);
  memcpy(myData, new long(3), 4);
  CPacket *myPacket = new CPacket(0x4319, myData, 8);
  free(myData);
  myPacket->Encrypt();
  myPacket->Output((char*)myData1, 0x1C);
  WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);

}
