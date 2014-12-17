015B3A50 >  8BD1                 mov edx,ecx
015B3A52    8B82 04800000        mov eax,dword ptr ds:[edx+0x8004]
015B3A58    56                   push esi
015B3A59    8B7424 08            mov esi,dword ptr ss:[esp+0x8]
015B3A5D    8BC8                 mov ecx,eax
015B3A5F    2BCA                 sub ecx,edx
015B3A61    8D8C31 FCBFFFFF      lea ecx,dword ptr ds:[ecx+esi+0xFFFFBFFC]
015B3A68    85C9                 test ecx,ecx
015B3A6A    57                   push edi
015B3A6B    7C 06                jl Xiosocket.015B3A73
015B3A6D    8D4411 04            lea eax,dword ptr ds:[ecx+edx+0x4]
015B3A71    EB 02                jmp Xiosocket.015B3A75
015B3A73    03C6                 add eax,esi
015B3A75    8BBA 0C800000        mov edi,dword ptr ds:[edx+0x800C]
015B3A7B    2BFE                 sub edi,esi
015B3A7D    8982 04800000        mov dword ptr ds:[edx+0x8004],eax
015B3A83    8BC7                 mov eax,edi
015B3A85    85C0                 test eax,eax
015B3A87    89BA 0C800000        mov dword ptr ds:[edx+0x800C],edi
015B3A8D    7E 3B                jle Xiosocket.015B3ACA
015B3A8F    3D 00400000          cmp eax,0x4000
015B3A94    7E 05                jle Xiosocket.015B3A9B
015B3A96    B8 00400000          mov eax,0x4000
015B3A9B    8B8A 04800000        mov ecx,dword ptr ds:[edx+0x8004]
015B3AA1    8BF2                 mov esi,edx
015B3AA3    2BF1                 sub esi,ecx
015B3AA5    81C6 04400000        add esi,0x4004
015B3AAB    3BF0                 cmp esi,eax
015B3AAD    7D 1B                jge Xiosocket.015B3ACA
015B3AAF    8BC8                 mov ecx,eax
015B3AB1    2BCE                 sub ecx,esi
015B3AB3    8D72 04              lea esi,dword ptr ds:[edx+0x4]
015B3AB6    8DBA 04400000        lea edi,dword ptr ds:[edx+0x4004]
015B3ABC    8BD1                 mov edx,ecx
015B3ABE    C1E9 02              shr ecx,0x2
015B3AC1    F3:A5                rep movs dword ptr es:[edi],dword ptr ds:[esi]
015B3AC3    8BCA                 mov ecx,edx
015B3AC5    83E1 03              and ecx,0x3
015B3AC8    F3:A4                rep movs byte ptr es:[edi],byte ptr ds:[esi]
015B3ACA    5F                   pop edi
015B3ACB    5E                   pop esi
015B3ACC    C2 0400              retn 0x4
