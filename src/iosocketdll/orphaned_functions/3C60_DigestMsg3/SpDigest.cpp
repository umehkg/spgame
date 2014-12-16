// SpDigest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
typedef unsigned long DWORD, *PDWORD, *LPDWORD; 
typedef unsigned char BYTE, *PBYTE, *LPBYTE;

void printDword(DWORD dwNum)
{
	BYTE var1 = *(BYTE *)(void *)((DWORD)&dwNum+3);
	printf( "%.2X %.2X %.2X %.2X ", *(BYTE *)&dwNum, *(BYTE *)(void *)((DWORD)&dwNum+1), *(BYTE *)(void *)((DWORD)&dwNum+2), *(BYTE *)(void *)((DWORD)&dwNum+3) );
}
DWORD digestLoop( char *digestVector, DWORD offset, DWORD* param1, DWORD* param2, DWORD* param3, DWORD* param4, DWORD* param5, DWORD* param6, DWORD imm32, BYTE lShift, BYTE rShift, bool inverseShift)
{
/*
param1: left operand of first add after mov
param2: right operand of first add after mov
param3: left operand of second mov (mov R, R)
param4: right operand of second mov (mov R, R)
param5: left operand of lea
param6: right operand of lea: [param6+param3+imm32]
*/
	DWORD var1 = *(DWORD *)((DWORD)digestVector+offset); //mov
	DWORD var2 = 0;
	*param1 = *param1+*param2;
	if (!inverseShift)
	{
		*param3 = *param4;
		*param3 = (((*param3 ^ *param2) & *param1 ) ^ *param4) + var1;
	}
	else
	{
		*param3 = *param2;
		*param3 = (((*param3 ^ *param4) & *param1 ) ^ *param4) + var1;
	}
	printf("%.8X %.8X %.8X %.8X\n", *param1,*param2,*param3,*param4);
	*param5 = *param6 + *param3 + imm32;
	var2 = *param5;
	if (!inverseShift)
	{
		*param5 = *param5 << lShift;
		var2 >>= rShift;
	}
	else
	{
		var2 <<= lShift;
		*param5 = *param5 >> rShift;
	}
	var2 = var2 | *param5;
	printf("%.8X\n", var2);
	return var2;
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
	//printf("%.8X\n", var7);
	var1 = var7;
	var7 <<= 0x7;
	var1 >>= 0x19;
	var1 = var1|var7;
	//printf("%.8X\n", var1);
	var7 = digestLoop(var6,0x4, &var1,&var4,&var5,&var3,&var2,&var2, 0xE8C7B756,0xC,0x14,false);
	var3 = digestLoop(var6,0x8, &var7,&var1,&var5,&var4,&var2,&var3, 0x242070DB,0x11,0xF,false);
	var4 = digestLoop(var6,0xC, &var3,&var7,&var5,&var1,&var2,&var4, 0xC1BDCEEE,0x16,0xA,true);//verified
	printf("%.8X %.8X %.8X %.8X %.8X %.8X %.8X \n", var1, var2, var3, var4, var5, (DWORD)var6, var7);
	var2 = digestLoop(var6,0x10, &var5,&var7,&var5,&var3,&var1,&var1, 0xF57C0FAF,0x7,0x19,false);
	var1 = digestLoop(var6,0x14, &var5,&var3,&var5,&var4,&var7,&var7, 0x4787C62A,0x14,0x0C,true);
	var7 = digestLoop(var6,0x18, &var1,&var2,&var5,&var4,&var3,&var3, 0xA8304613,0xF,0x11,true);
	var3 = digestLoop(var6,0x1C, &var7,&var1,&var5,&var1,&var4,&var4, 0xFD469501,0xA,0x16,true);
	//+3D77:
}
int _tmain(int argc, _TCHAR* argv[])
{
	//char digestVector[] = "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\0\0\0\0\0\0\0\0";
	//char packet[] = "\x07\0\0\0123";
	char digestVector[] = "\x5C\x25\xB1\x8E\xC1\x6C\xD3\xFC\xEC\xF8\x85\xCA\xD3\x48\xB2\x53\x38\0\0\0\0\0\0\0";
	char packet[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char buf[0x200];
	memcpy(&buf[0], digestVector, sizeof(digestVector)-1);
	memcpy(&buf[sizeof(digestVector)-1], packet, sizeof(packet)-1);
	digest(buf);
	return 0;
}

