DWORD digestLoop( char *digestVector, DWORD offset, DWORD param1, DWORD param2, DWORD param3, DWORD param4, DWORD imm32, BYTE lShift, BYTE rShift)
{
/*
param1: left operand of first add after mov
param2: right operand of first add after mov
param3: right operand of second mov (mov R, R)
param4: left operand of lea
*/
	DWORD var0 = *(DWORD *)((DWORD)digestVector+offset); //mov
	DWORD var1 = ((param3^param2)&(param1+param2) ^ param3) + var0;
	DWORD var2 = param4+var1+imm32; //lea
	var2 = (var2<<lShift)|(var2>>rShift);
	return var2;
}
