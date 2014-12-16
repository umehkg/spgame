015B45B0    56              push esi
015B45B1    8B7424 0C       mov esi,dword ptr ss:[esp+0xC]
015B45B5    8B46 10         mov eax,dword ptr ds:[esi+0x10]
015B45B8    C1E8 03         shr eax,0x3
015B45BB    83E0 3F         and eax,0x3F
015B45BE    57              push edi
015B45BF    8D7C30 18       lea edi,dword ptr ds:[eax+esi+0x18]
015B45C3    B9 3F000000     mov ecx,0x3F
015B45C8    2BC8            sub ecx,eax
015B45CA    C607 80         mov byte ptr ds:[edi],0x80
015B45CD    47              inc edi
015B45CE    33C0            xor eax,eax
015B45D0    83F9 08         cmp ecx,0x8
015B45D3    73 26           jnb Xiosocket.015B45FB
015B45D5    8BD1            mov edx,ecx
015B45D7    C1E9 02         shr ecx,0x2
015B45DA    F3:AB           rep stos dword ptr es:[edi]
015B45DC    8BCA            mov ecx,edx
015B45DE    83E1 03         and ecx,0x3
015B45E1    F3:AA           rep stos byte ptr es:[edi]
015B45E3    8D7E 18         lea edi,dword ptr ds:[esi+0x18]
015B45E6    57              push edi
015B45E7    56              push esi
015B45E8    E8 73F6FFFF     call iosocket.015B3C60
015B45ED    83C4 08         add esp,0x8
015B45F0    B9 0E000000     mov ecx,0xE
015B45F5    33C0            xor eax,eax
015B45F7    F3:AB           rep stos dword ptr es:[edi]
015B45F9    EB 11           jmp Xiosocket.015B460C
015B45FB    83C1 F8         add ecx,-0x8
015B45FE    8BD1            mov edx,ecx
015B4600    C1E9 02         shr ecx,0x2
015B4603    F3:AB           rep stos dword ptr es:[edi]
015B4605    8BCA            mov ecx,edx
015B4607    83E1 03         and ecx,0x3
015B460A    F3:AA           rep stos byte ptr es:[edi]
015B460C    8B46 10         mov eax,dword ptr ds:[esi+0x10]
015B460F    8B4E 14         mov ecx,dword ptr ds:[esi+0x14]
015B4612    8D56 18         lea edx,dword ptr ds:[esi+0x18]
015B4615    52              push edx
015B4616    56              push esi
015B4617    8946 50         mov dword ptr ds:[esi+0x50],eax
015B461A    894E 54         mov dword ptr ds:[esi+0x54],ecx
015B461D    E8 3EF6FFFF     call iosocket.015B3C60
015B4622    8B4C24 14       mov ecx,dword ptr ss:[esp+0x14]
015B4626    8BC6            mov eax,esi
015B4628    8B10            mov edx,dword ptr ds:[eax]
015B462A    8911            mov dword ptr ds:[ecx],edx
015B462C    8B50 04         mov edx,dword ptr ds:[eax+0x4]
015B462F    8951 04         mov dword ptr ds:[ecx+0x4],edx
015B4632    8B50 08         mov edx,dword ptr ds:[eax+0x8]
015B4635    8951 08         mov dword ptr ds:[ecx+0x8],edx
015B4638    8B40 0C         mov eax,dword ptr ds:[eax+0xC]
015B463B    83C4 08         add esp,0x8
015B463E    8941 0C         mov dword ptr ds:[ecx+0xC],eax
015B4641    5F              pop edi
015B4642    C706 00000000   mov dword ptr ds:[esi],0x0
015B4648    5E              pop esi
015B4649    C3              retn
