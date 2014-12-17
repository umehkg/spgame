015B38F0 >  8B91 14400000        mov edx,dword ptr ds:[ecx+0x4014]
015B38F6    8B4424 04            mov eax,dword ptr ss:[esp+0x4]
015B38FA    03D0                 add edx,eax
015B38FC    8991 14400000        mov dword ptr ds:[ecx+0x4014],edx
015B3902    C2 0400              retn 0x4
