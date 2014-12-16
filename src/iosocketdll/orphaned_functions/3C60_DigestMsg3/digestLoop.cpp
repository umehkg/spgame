DWORD digestLoop( char *digestVector, DWORD offset, DWORD* param1, DWORD* param2, DWORD* param3, DWORD* param4, DWORD imm32, BYTE lShift, BYTE rShift)
{
	//UNTESTED!!!
/*
param1: left operand of first add after mov
param2: right operand of first add after mov
param3: left operand of second mov (mov R, R)
param4: right operand of second mov (mov R, R)
*/
	DWORD var1 = *(DWORD *)((DWORD)digestVector+offset); //mov
	DWORD var2;
	DWORD var3;
	*param1 = *param1+*param2;
	*param3 = *param4;
	*param3 = (((*param3 ^ *param2) & *param1 ) ^ *param4) + var1;
	var2 = var2 + *param3 + imm32;
	var3 = var2;
	var2 <<= lShift;
	var3 >>= rShift;
	var3 = var3 | var2;
	return var3;
}
void digest(char *param1) //eax
{
	DWORD var1 = *(DWORD *)param1; //ecx
	DWORD var2 = *(DWORD *)((DWORD)param1+0xC); //ebx
	DWORD var3 = *(DWORD *)((DWORD)param1+0x8); //esi
	DWORD var4 = *(DWORD *)((DWORD)param1+0x4); //edi
	DWORD var5 = var2 ^ var3; //ebp
	char *var6 = (char *)((DWORD)param1+0x18); //new eax
	DWORD var7 = *(DWORD *)var6; //edx
	printf("%.8X %.8X %.8X %.8X %.8X %.8X %.8X \n", var1, var2, var3, var4, var5, (DWORD)var6, var7);
	var5 = ((var5 & var4) ^ var2) + var7;
	var7 = var1 + var5 + 0xD76AA478;
	printf("%.8X\n", var7);
	var1 = var7;
	var7 <<= 0x7;
	var1 >>= 0x19;
	var1 = var1|var7;
	printf("%.8X\n", var1);
	var7 = digestLoop(param1,0x4, &var1,&var4,&var5,&var3, 0xE8C7B756,0xC,0x14);
	var3 = digestLoop(param1,0x8, &var7,&var1,&var5,&var4, 0x242070DB,0x11,0xF);
	//todo
}
