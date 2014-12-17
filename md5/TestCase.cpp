#include "stdafx.h"
#include <string.h>
#include "md5.h"

void printDigest( char* digest )
{
	for (int i = 0; i < 0x10; i++)
		printf( "%.2X ", (unsigned char)*(digest+i) );
	printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	char testData[]= "\x20\0\0\0testtest\0\0\0\0testtesttesttest";
	char buf[0x100];
	printf("\nMD5:\n");
	md5_raw(buf,testData,sizeof(testData)-1);
	printDigest(buf); //e67582e0dacf8011b23b5cb0039036da
	return 0;
}
