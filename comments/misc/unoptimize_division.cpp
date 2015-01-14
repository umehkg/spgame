/*
Copyright
umehkg @github
2015-01-15
*/

long getDivisor(long magic, unsigned char shift)
{
	__asm
	{
		mov eax, magic
		test eax, eax
		jz b3
		push eax
		xor edx, edx
		mov dl, 0x01
		mov cl, shift
  b1:
		test cl, cl
		jz b2
		shl edx, 0x01
		dec cl
		jne b1
  b2:
		xor eax, eax
		pop ecx
		idiv ecx
		inc eax
		jmp end
  b3:
		xor eax, eax
  end:
	}
}
