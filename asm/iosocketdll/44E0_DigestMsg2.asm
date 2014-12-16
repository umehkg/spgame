015B44E0    53              push ebx
015B44E1    8B5C24 08       mov ebx,dword ptr ss:[esp+0x8]
015B44E5    8B43 10         mov eax,dword ptr ds:[ebx+0x10]
015B44E8    55              push ebp
015B44E9    8B6C24 14       mov ebp,dword ptr ss:[esp+0x14]
015B44ED    8D0CE8          lea ecx,dword ptr ds:[eax+ebp*8]
015B44F0    3BC8            cmp ecx,eax
015B44F2    56              push esi
015B44F3    57              push edi
015B44F4    894B 10         mov dword ptr ds:[ebx+0x10],ecx
015B44F7    73 03           jnb Xiosocket.015B44FC
015B44F9    FF43 14         inc dword ptr ds:[ebx+0x14]
015B44FC    8B73 14         mov esi,dword ptr ds:[ebx+0x14]
015B44FF    8BCD            mov ecx,ebp
015B4501    C1E9 1D         shr ecx,0x1D
015B4504    03F1            add esi,ecx
015B4506    C1E8 03         shr eax,0x3
015B4509    83E0 3F         and eax,0x3F
015B450C    8973 14         mov dword ptr ds:[ebx+0x14],esi
015B450F    74 42           je Xiosocket.015B4553
015B4511    8B7424 18       mov esi,dword ptr ss:[esp+0x18]
015B4515    B9 40000000     mov ecx,0x40
015B451A    2BC8            sub ecx,eax
015B451C    3BE9            cmp ebp,ecx
015B451E    8D7C18 18       lea edi,dword ptr ds:[eax+ebx+0x18]
015B4522    894C24 14       mov dword ptr ss:[esp+0x14],ecx
015B4526    72 73           jb Xiosocket.015B459B
015B4528    8BC1            mov eax,ecx
015B452A    C1E9 02         shr ecx,0x2
015B452D    F3:A5           rep movs dword ptr es:[edi],dword ptr ds:[esi>
015B452F    8BC8            mov ecx,eax
015B4531    83E1 03         and ecx,0x3
015B4534    F3:A4           rep movs byte ptr es:[edi],byte ptr ds:[esi]
015B4536    8D4B 18         lea ecx,dword ptr ds:[ebx+0x18]
015B4539    51              push ecx
015B453A    53              push ebx
015B453B    E8 20F7FFFF     call iosocket.015B3C60
015B4540    8B4424 1C       mov eax,dword ptr ss:[esp+0x1C]
015B4544    8B5424 20       mov edx,dword ptr ss:[esp+0x20]
015B4548    03D0            add edx,eax
015B454A    83C4 08         add esp,0x8
015B454D    895424 18       mov dword ptr ss:[esp+0x18],edx
015B4551    2BE8            sub ebp,eax
015B4553    83FD 40         cmp ebp,0x40
015B4556    72 3C           jb Xiosocket.015B4594
015B4558    8BC5            mov eax,ebp
015B455A    C1E8 06         shr eax,0x6
015B455D    894424 14       mov dword ptr ss:[esp+0x14],eax
015B4561    8B7424 18       mov esi,dword ptr ss:[esp+0x18]
015B4565    8D43 18         lea eax,dword ptr ds:[ebx+0x18]
015B4568    50              push eax
015B4569    8BF8            mov edi,eax
015B456B    B9 10000000     mov ecx,0x10
015B4570    53              push ebx
015B4571    F3:A5           rep movs dword ptr es:[edi],dword ptr ds:[esi>
015B4573    E8 E8F6FFFF     call iosocket.015B3C60
015B4578    8B5424 20       mov edx,dword ptr ss:[esp+0x20]
015B457C    8B4424 1C       mov eax,dword ptr ss:[esp+0x1C]
015B4580    83C2 40         add edx,0x40
015B4583    83C4 08         add esp,0x8
015B4586    83ED 40         sub ebp,0x40
015B4589    48              dec eax
015B458A    895424 18       mov dword ptr ss:[esp+0x18],edx
015B458E    894424 14       mov dword ptr ss:[esp+0x14],eax
015B4592  ^ 75 CD           jnz Xiosocket.015B4561
015B4594    8B7424 18       mov esi,dword ptr ss:[esp+0x18]
015B4598    8D7B 18         lea edi,dword ptr ds:[ebx+0x18]
015B459B    8BCD            mov ecx,ebp
015B459D    8BD1            mov edx,ecx
015B459F    C1E9 02         shr ecx,0x2
015B45A2    F3:A5           rep movs dword ptr es:[edi],dword ptr ds:[esi>
015B45A4    8BCA            mov ecx,edx
015B45A6    83E1 03         and ecx,0x3
015B45A9    F3:A4           rep movs byte ptr es:[edi],byte ptr ds:[esi]
015B45AB    5F              pop edi
015B45AC    5E              pop esi
015B45AD    5D              pop ebp
015B45AE    5B              pop ebx
015B45AF    C3              retn
