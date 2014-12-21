// SpEncryptPacket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include "md5.h"

typedef struct _LOGIN_INFO
{
	char id[12];
	char pw[12];
}LOGIN_INFO, *PLOGIN_INFO;
void encryptPacket( char *content )
{
	long noOfBytes = *(long *)content;
	if (noOfBytes <= 0)
		return;
	for (int i = 0; i < noOfBytes; i++)
	{
		unsigned char c = *(content+4+i);
		c = ~c;
		*(content+4+i) = (c >> 5)|(c << 3);
	}
}
void decryptPacket( char *content )
{
	long noOfBytes = *(long *)content;
	if (noOfBytes <= 0)
		return;
	for (int i = 0; i < noOfBytes; i++)
	{
		unsigned char c = *(content+4+i);
		c = (c << 5)|(c >> 3);
		*(content+4+i) = ~c;
	}
}
void getLoginInfo( char* content, PLOGIN_INFO loginInfo )
{
	memcpy(&loginInfo->id[0], (char *)(void *)(content+0x3c), 0xc);
	memcpy(&loginInfo->pw[0], (char *)(void *)(content+0x49), 0xc);
}
void printContent( char* content, long noOfBytes)
{
	for (int i = 0; i < noOfBytes; i++)
	{
		printf( "%.2X ", (unsigned char)*(content+i) );
		if ( (i == 3) || (i%16 == 3)&&(i > 3) )
			printf("\n");
	}
	printf("\n");
}
void printDigest( char* digest )
{
	for (int i = 0; i < 0x10; i++)
		printf( "%.2X ", (unsigned char)*(digest+i) );
	printf("\n");
}


int _tmain(int argc, _TCHAR* argv[])
{
	//char testData[] = "\x88\x00\x00\x00\x07\x27\x00\x00\x1C\x2B\x00\x00\x88\xFE\x35\xC2\xFF\xFF\xFF\xFF\x8D\xF8\xA1\x29\x4C\x24\xA5\x8C\x4C\x6D\xA5\xD6\xC6\xE2\xC2\x4E\x0B\x85\x73\x80\xFC\x0A\x79\xD9\xCF\x7B\x21\xC0\x78\x2A\x81\xFC\x3F\x38\x6E\x00\x23\x16\x00\x00\x61\x6C\x61\x6E\x00\x85\x17\x00\x00\x00\x00\x00\xFE\x31\x32\x33\x00\xFF\xFF\xFF\x00\x00\x00\xC0\x14\xC7\xFB\x02\x75\x1C\x00\x00\x1A\x03\x38\x02\x00\x04\x00\x03\x00\xF4\x70\x00\x00\x00\x00\x00\xE0\xFD\x12\x00\x00\x00\x00\x00\xE1\x82\xD2\x77\x20\x0D\x81\x00\xE1\x82\xD2\x77\x00\x00\x00\x00\xC8\x05\x00\x00";
	//char testData[] = "\x1c\x00\x00\x00\x3e\xdd\xff\xff\x1f\xa6\xff\xff\x4e\xb6\xf6\x63\x11\x52\xe5\x86\x74\x47\xff\xff\x87\xc6\xff\xff";
	//char testData[] = "\x98\x00\x00\x00\xfd\xe5\xff\xff\x1f\xa6\xff\xff\x25\x4b\x90\xca\x4c\x33\xc3\xf5\xcc\x64\x5c\x66\x7e\x4e\x7e\x66\xff\x46\xfd\xff\x91\xa2\x2a\x19\xcf\xff\xff\xff\xc5\x9c\x84\xec\xd4\x6c\xb4\x2c\xff\x00\x6f\xff\x4f\xbb\xf5\x0c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xee\xfe\xbd\xef\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1d\x18\x6f\xff";
	//char testData[]= "\xbb\xbb\xbb\xbb\x21\x11\0\0\x1c\x2b\0\0\xcc\xcc\xcc\xcc\xff\xff\xff\xff\x00\0\0\0\x00\0\0\0\x00\0\0\0\x00\0\0\0\x6B\0\0\0prev ping\0";
	//char testData[] = "\x00\0\0\0\x07\x29\0\0\x1c\x2b\0\0\xcc\xcc\xcc\xcc\xff\xff\xff\xff\xaf\x0f\0\0\x00\0\0\0";
	char testData[] = "\x00\0\0\0\x12\x29\0\0\x1c\x2b\0\0\xcc\xcc\xcc\xcc\xff\xff\xff\xff\x01\0\0\0\xFA\0\0\0";
	char buf[0x100];
	//PLOGIN_INFO pLoginInfo = new LOGIN_INFO;
	int testSize = sizeof(testData)-1;

	memcpy(buf, testData, sizeof(testData)-1); //-1 because of implicit null literal at end of char literal
	printf("Original (0x%2X bytes):\n", testSize);
	printContent(buf, sizeof(testData)-1);
	*(long *)(testData) = testSize;
	*(long *)(testData+0xC) = 0;
	//printf("\nMD5:\n");
	md5_raw(buf,testData,sizeof(testData)-1);
	//printDigest(buf);
	printf("\nSP-MD5:\n");
	unsigned long sp_md5 = *(unsigned long *)buf ^ *(unsigned long *)(buf+4) ^ *(unsigned long *)(buf+8) ^ *(unsigned long *)(buf+0xC);
	printf( "%.2X %.2X %.2X %.2X\n", sp_md5 & 0xFF , sp_md5 >> 8 & 0xFF , sp_md5 >> 16 & 0xFF, sp_md5 >> 24);
	*(long *)(testData+0xC) = sp_md5;

	memcpy(buf, testData, sizeof(testData)-1);
	encryptPacket(buf);
	printf("\nEncrypt:\n");
	printContent(buf, sizeof(testData)-1);
	decryptPacket(buf);
	printf("\nDecrypt:\n");
	printContent(buf, sizeof(testData)-1);
	

	/*
	getLoginInfo(buf, pLoginInfo);
	printf("\nLogin info:\n");
	printf("id: %s\npw: %s\n", pLoginInfo->id, pLoginInfo->pw);
	*/

	return 0;
}

