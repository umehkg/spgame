if( *(long*)&decryptBuff[4] == 0x4438)
{
    long buyItemId = *(long *)&decryptBuff[0x14];
    long buyItemAmount = *(long *)&decryptBuff[0x18];
    
    unsigned char myData1[0x698];
    char *myData = (char *)calloc(0x30-0x14, 0x1);
    
    long buyResult = 0; //1, 2 or 8
    long long playerCode = 20150109;
    long playerWhiteCards[4] = {1000, 1000, 1000, 1000}; //water, fire, earth, wind
    
    buyItemId -= 6000;
    if ( (buyItemId < 0)||(buyItemId > 4)||(buyItemAmount < 0)||(buyItemAmount > 9999) ) //unexpected values
    {
      buyResult = 1;
    }
    else //OK
    {
      buyResult = 8;
      playerWhiteCards[buyItemId] += buyItemAmount;
    }
    memcpy(myData+0x18-0x14, &playerCode, 8);
    memcpy(myData+0x20-0x14, &playerWhiteCards, 4*4);

    CPacket *myPacket = new CPacket(0x4439, myData, 0x30-0x14);
    myPacket->Encrypt();
    myPacket->Output((char*)myData1, 0x30);
    WriteComm1((char*)myData1, myPacket->GetSize(), dwTimeout);
}
