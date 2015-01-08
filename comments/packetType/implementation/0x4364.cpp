if( *(long*)&decryptBuff[4] == 0x4363)
{
  /* sendPacket 0x4364 - response to packetType 0x4363 */
  unsigned char myData1[0x18];
  long playerCash = 20150109L;
  CPacket *myPacket = new CPacket(0x4364, &playerCash, 4);
  myPacket->Encrypt();
  myPacket->Output((char*)myData1, 0x18);
  WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
}
