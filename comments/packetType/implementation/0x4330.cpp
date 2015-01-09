if( *(long*)&decryptBuff[4] == 0x4329)
{
  unsigned char myData1[0x30];
  char *myData = (char *)calloc(0x30-0x14, 1);
  
  long scrollOp = *(long*)&decryptBuff[0x14];
  long scrollArg = *(long*)&decryptBuff[0x18]; 
  
  long buyScrollResult = 0; //0:success , 1, 2
  long long playerCode = 100000;
  
  long scrollCount = 0;
  
  memcpy(myData+0x14-0x14, &scrollOp, 4);
  memcpy(myData+0x18-0x14, &buyScrollResult, 4);
  if (!!scrollOp) //sell
  {
    memcpy(myData+0x1C-0x14, &scrollArg, 4); 
  } else { //buy
    memcpy(myData+0x1C-0x14, &scrollCount, 4);
  }
  if (!scrollOp) //buy
  {
	++scrollArg;
    memcpy(myData+0x20-0x14, &scrollArg, 4);
  }
  memcpy(myData+0x28-0x14, &playerCode, 8);
  CPacket *myPacket = new CPacket(0x4330, myData, 0x30-0x14);
  free(myData);
  myPacket->Encrypt();
  myPacket->Output((char*)myData1, 0x30);
  WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
}
