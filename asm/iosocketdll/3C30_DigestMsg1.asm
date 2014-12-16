015B3C30    8B4424 04         mov eax,dword ptr ss:[esp+0x4]
015B3C34    33C9              xor ecx,ecx
015B3C36    C700 01234567     mov dword ptr ds:[eax],0x67452301
015B3C3C    C740 04 89ABCDEF  mov dword ptr ds:[eax+0x4],0xEFCDAB89
015B3C43    C740 08 FEDCBA98  mov dword ptr ds:[eax+0x8],0x98BADCFE
015B3C4A    C740 0C 76543210  mov dword ptr ds:[eax+0xC],0x10325476
015B3C51    8948 10           mov dword ptr ds:[eax+0x10],ecx
015B3C54    8948 14           mov dword ptr ds:[eax+0x14],ecx
015B3C57    C3                retn
