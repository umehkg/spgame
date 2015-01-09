if( *(long*)&decryptBuff[4] == 0x4316)
{
  //noItem = -1
  long equipMagicItemPos = *(long *)&decryptBuff[0x14];
  long equipWeaponItemPos = *(long *)&decryptBuff[0x18];
  long equipBodyItemPos = *(long *)&decryptBuff[0x1C];
  long equipPetItemPos = *(long *)&decryptBuff[0x20];
  long equipAvatarItemPos[7];
  memcpy(&equipAvatarItemPos[7], (long *)&decryptBuff[0x24], 4*7);
  //TODO: update databse
}
