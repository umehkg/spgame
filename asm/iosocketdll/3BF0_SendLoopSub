015B3BF0    8B11                 mov edx,dword ptr ds:[ecx]
015B3BF2    83FA FF              cmp edx,-0x1
015B3BF5    74 1A                je Xiosocket.015B3C11
015B3BF7    F7D2                 not edx
015B3BF9    81C2 FB140000        add edx,0x14FB
015B3BFF    6BD2 1F              imul edx,edx,0x1F
015B3C02    8BC2                 mov eax,edx
015B3C04    C1F8 10              sar eax,0x10
015B3C07    33C2                 xor eax,edx
015B3C09    8901                 mov dword ptr ds:[ecx],eax
015B3C0B    7D 04                jge Xiosocket.015B3C11
015B3C0D    F7D8                 neg eax
015B3C0F    8901                 mov dword ptr ds:[ecx],eax
015B3C11    C3                   retn
