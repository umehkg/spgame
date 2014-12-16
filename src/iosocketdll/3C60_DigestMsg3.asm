Image Base of iosocketdll.dll = 015B0000
015B3C60    83EC 38         sub esp,0x38
015B3C63    8B4424 3C       mov eax,dword ptr ss:[esp+0x3C]
015B3C67    8B08            mov ecx,dword ptr ds:[eax]
015B3C69    53              push ebx
015B3C6A    8B58 0C         mov ebx,dword ptr ds:[eax+0xC]
015B3C6D    55              push ebp
015B3C6E    8BEB            mov ebp,ebx
015B3C70    56              push esi
015B3C71    8B70 08         mov esi,dword ptr ds:[eax+0x8]
015B3C74    33EE            xor ebp,esi
015B3C76    57              push edi
015B3C77    8B78 04         mov edi,dword ptr ds:[eax+0x4]
015B3C7A    8B4424 50       mov eax,dword ptr ss:[esp+0x50]
015B3C7E    8B10            mov edx,dword ptr ds:[eax]
015B3C80    23EF            and ebp,edi
015B3C82    33EB            xor ebp,ebx
015B3C84    03EA            add ebp,edx
015B3C86    8D9429 78A46AD7 lea edx,dword ptr ds:[ecx+ebp+0xD76AA478]
015B3C8D    8BCA            mov ecx,edx
015B3C8F    C1E2 07         shl edx,0x7
015B3C92    C1E9 19         shr ecx,0x19
015B3C95    0BCA            or ecx,edx
015B3C97    8B50 04         mov edx,dword ptr ds:[eax+0x4]
015B3C9A    03CF            add ecx,edi
015B3C9C    8BEE            mov ebp,esi
015B3C9E    33EF            xor ebp,edi
015B3CA0    23E9            and ebp,ecx
015B3CA2    33EE            xor ebp,esi
015B3CA4    03EA            add ebp,edx
015B3CA6    8D9C2B 56B7C7E8 lea ebx,dword ptr ds:[ebx+ebp+0xE8C7B756]
015B3CAD    8BD3            mov edx,ebx
015B3CAF    C1E3 0C         shl ebx,0xC
015B3CB2    C1EA 14         shr edx,0x14
015B3CB5    0BD3            or edx,ebx
015B3CB7    8B58 08         mov ebx,dword ptr ds:[eax+0x8]
015B3CBA    03D1            add edx,ecx
015B3CBC    8BEF            mov ebp,edi
015B3CBE    33E9            xor ebp,ecx
015B3CC0    23EA            and ebp,edx
015B3CC2    33EF            xor ebp,edi
015B3CC4    03EB            add ebp,ebx
015B3CC6    8D9C2E DB702024 lea ebx,dword ptr ds:[esi+ebp+0x242070DB]
015B3CCD    8BF3            mov esi,ebx
015B3CCF    C1E3 11         shl ebx,0x11
015B3CD2    C1EE 0F         shr esi,0xF
015B3CD5    0BF3            or esi,ebx
015B3CD7    8B58 0C         mov ebx,dword ptr ds:[eax+0xC]
015B3CDA    03F2            add esi,edx
015B3CDC    8BEA            mov ebp,edx
015B3CDE    33E9            xor ebp,ecx
015B3CE0    23EE            and ebp,esi
015B3CE2    33E9            xor ebp,ecx
015B3CE4    03EB            add ebp,ebx
015B3CE6    8D9C2F EECEBDC1 lea ebx,dword ptr ds:[edi+ebp+0xC1BDCEEE]
015B3CED    8BFB            mov edi,ebx
015B3CEF    C1EB 0A         shr ebx,0xA
015B3CF2    C1E7 16         shl edi,0x16
015B3CF5    0BFB            or edi,ebx
015B3CF7    8B58 10         mov ebx,dword ptr ds:[eax+0x10]
015B3CFA    8BEA            mov ebp,edx
015B3CFC    33EE            xor ebp,esi
015B3CFE    03FE            add edi,esi
015B3D00    23EF            and ebp,edi
015B3D02    33EA            xor ebp,edx
015B3D04    03EB            add ebp,ebx
015B3D06    8D8C29 AF0F7CF5 lea ecx,dword ptr ds:[ecx+ebp+0xF57C0FAF]
015B3D0D    8BD9            mov ebx,ecx
015B3D0F    C1E1 07         shl ecx,0x7
015B3D12    C1EB 19         shr ebx,0x19
015B3D15    0BD9            or ebx,ecx
015B3D17    8B48 14         mov ecx,dword ptr ds:[eax+0x14]
015B3D1A    8BEE            mov ebp,esi
015B3D1C    33EF            xor ebp,edi
015B3D1E    03DF            add ebx,edi
015B3D20    23EB            and ebp,ebx
015B3D22    33EE            xor ebp,esi
015B3D24    03E9            add ebp,ecx
015B3D26    8D942A 2AC68747 lea edx,dword ptr ds:[edx+ebp+0x4787C62A]
015B3D2D    8BCA            mov ecx,edx
015B3D2F    C1E9 14         shr ecx,0x14
015B3D32    C1E2 0C         shl edx,0xC
015B3D35    0BCA            or ecx,edx
015B3D37    8B50 18         mov edx,dword ptr ds:[eax+0x18]
015B3D3A    03CB            add ecx,ebx
015B3D3C    8BEF            mov ebp,edi
015B3D3E    33EB            xor ebp,ebx
015B3D40    23E9            and ebp,ecx
015B3D42    33EF            xor ebp,edi
015B3D44    03EA            add ebp,edx
015B3D46    8DB42E 134630A8 lea esi,dword ptr ds:[esi+ebp+0xA8304613]
015B3D4D    8BD6            mov edx,esi
015B3D4F    C1EA 0F         shr edx,0xF
015B3D52    C1E6 11         shl esi,0x11
015B3D55    0BD6            or edx,esi
015B3D57    8B70 1C         mov esi,dword ptr ds:[eax+0x1C]
015B3D5A    03D1            add edx,ecx
015B3D5C    8BE9            mov ebp,ecx
015B3D5E    33EB            xor ebp,ebx
015B3D60    23EA            and ebp,edx
015B3D62    33EB            xor ebp,ebx
015B3D64    03EE            add ebp,esi
015B3D66    8DBC2F 019546FD lea edi,dword ptr ds:[edi+ebp+0xFD469501]
015B3D6D    8BF7            mov esi,edi
015B3D6F    C1EF 0A         shr edi,0xA
015B3D72    C1E6 16         shl esi,0x16
015B3D75    0BF7            or esi,edi
015B3D77    8B78 20         mov edi,dword ptr ds:[eax+0x20]
015B3D7A    03F2            add esi,edx
015B3D7C    8BE9            mov ebp,ecx
015B3D7E    33EA            xor ebp,edx
015B3D80    23EE            and ebp,esi
015B3D82    33E9            xor ebp,ecx
015B3D84    03EF            add ebp,edi
015B3D86    8D9C2B D8988069 lea ebx,dword ptr ds:[ebx+ebp+0x698098D8]
015B3D8D    897C24 30       mov dword ptr ss:[esp+0x30],edi
015B3D91    8BFB            mov edi,ebx
015B3D93    C1E3 07         shl ebx,0x7
015B3D96    8BEA            mov ebp,edx
015B3D98    33EE            xor ebp,esi
015B3D9A    C1EF 19         shr edi,0x19
015B3D9D    0BFB            or edi,ebx
015B3D9F    8B58 24         mov ebx,dword ptr ds:[eax+0x24]
015B3DA2    03FE            add edi,esi
015B3DA4    23EF            and ebp,edi
015B3DA6    33EA            xor ebp,edx
015B3DA8    03EB            add ebp,ebx
015B3DAA    8D8C29 AFF7448B lea ecx,dword ptr ds:[ecx+ebp+0x8B44F7AF]
015B3DB1    8BD9            mov ebx,ecx
015B3DB3    C1E1 0C         shl ecx,0xC
015B3DB6    C1EB 14         shr ebx,0x14
015B3DB9    0BD9            or ebx,ecx
015B3DBB    8B48 28         mov ecx,dword ptr ds:[eax+0x28]
015B3DBE    03DF            add ebx,edi
015B3DC0    8BEE            mov ebp,esi
015B3DC2    33EF            xor ebp,edi
015B3DC4    23EB            and ebp,ebx
015B3DC6    33EE            xor ebp,esi
015B3DC8    03E9            add ebp,ecx
015B3DCA    8D942A B15BFFFF lea edx,dword ptr ds:[edx+ebp+0xFFFF5BB1]
015B3DD1    8BCA            mov ecx,edx
015B3DD3    C1E2 11         shl edx,0x11
015B3DD6    C1E9 0F         shr ecx,0xF
015B3DD9    0BCA            or ecx,edx
015B3DDB    8B50 2C         mov edx,dword ptr ds:[eax+0x2C]
015B3DDE    03CB            add ecx,ebx
015B3DE0    8BEB            mov ebp,ebx
015B3DE2    33EF            xor ebp,edi
015B3DE4    23E9            and ebp,ecx
015B3DE6    33EF            xor ebp,edi
015B3DE8    03EA            add ebp,edx
015B3DEA    8DB42E BED75C89 lea esi,dword ptr ds:[esi+ebp+0x895CD7BE]
015B3DF1    8BD6            mov edx,esi
015B3DF3    C1E2 16         shl edx,0x16
015B3DF6    C1EE 0A         shr esi,0xA
015B3DF9    0BD6            or edx,esi
015B3DFB    8B70 30         mov esi,dword ptr ds:[eax+0x30]
015B3DFE    8BEB            mov ebp,ebx
015B3E00    33E9            xor ebp,ecx
015B3E02    03D1            add edx,ecx
015B3E04    23EA            and ebp,edx
015B3E06    33EB            xor ebp,ebx
015B3E08    03EE            add ebp,esi
015B3E0A    8DBC2F 2211906B lea edi,dword ptr ds:[edi+ebp+0x6B901122]
015B3E11    8BF7            mov esi,edi
015B3E13    C1EE 19         shr esi,0x19
015B3E16    C1E7 07         shl edi,0x7
015B3E19    0BF7            or esi,edi
015B3E1B    8B78 34         mov edi,dword ptr ds:[eax+0x34]
015B3E1E    03F2            add esi,edx
015B3E20    8BE9            mov ebp,ecx
015B3E22    33EA            xor ebp,edx
015B3E24    23EE            and ebp,esi
015B3E26    33E9            xor ebp,ecx
015B3E28    03EF            add ebp,edi
015B3E2A    8D9C2B 937198FD lea ebx,dword ptr ds:[ebx+ebp+0xFD987193]
015B3E31    8B78 38         mov edi,dword ptr ds:[eax+0x38]
015B3E34    8BEB            mov ebp,ebx
015B3E36    C1E3 0C         shl ebx,0xC
015B3E39    C1ED 14         shr ebp,0x14
015B3E3C    0BEB            or ebp,ebx
015B3E3E    03EE            add ebp,esi
015B3E40    8BDA            mov ebx,edx
015B3E42    33DE            xor ebx,esi
015B3E44    23DD            and ebx,ebp
015B3E46    33DA            xor ebx,edx
015B3E48    03DF            add ebx,edi
015B3E4A    8D8C19 8E4379A6 lea ecx,dword ptr ds:[ecx+ebx+0xA679438E]
015B3E51    897C24 1C       mov dword ptr ss:[esp+0x1C],edi
015B3E55    8BF9            mov edi,ecx
015B3E57    C1EF 0F         shr edi,0xF
015B3E5A    C1E1 11         shl ecx,0x11
015B3E5D    0BF9            or edi,ecx
015B3E5F    8B48 3C         mov ecx,dword ptr ds:[eax+0x3C]
015B3E62    03FD            add edi,ebp
015B3E64    8BDD            mov ebx,ebp
015B3E66    33DE            xor ebx,esi
015B3E68    23DF            and ebx,edi
015B3E6A    33DE            xor ebx,esi
015B3E6C    03D9            add ebx,ecx
015B3E6E    8D941A 2108B449 lea edx,dword ptr ds:[edx+ebx+0x49B40821]
015B3E75    8B58 04         mov ebx,dword ptr ds:[eax+0x4]
015B3E78    8BCA            mov ecx,edx
015B3E7A    C1EA 0A         shr edx,0xA
015B3E7D    C1E1 16         shl ecx,0x16
015B3E80    0BCA            or ecx,edx
015B3E82    03CF            add ecx,edi
015B3E84    8BD7            mov edx,edi
015B3E86    33D1            xor edx,ecx
015B3E88    23D5            and edx,ebp
015B3E8A    33D7            xor edx,edi
015B3E8C    03D3            add edx,ebx
015B3E8E    8B58 18         mov ebx,dword ptr ds:[eax+0x18]
015B3E91    8DB416 62251EF6 lea esi,dword ptr ds:[esi+edx+0xF61E2562]
015B3E98    8BD6            mov edx,esi
015B3E9A    C1E6 05         shl esi,0x5
015B3E9D    C1EA 1B         shr edx,0x1B
015B3EA0    0BD6            or edx,esi
015B3EA2    03D1            add edx,ecx
015B3EA4    8BF1            mov esi,ecx
015B3EA6    33F2            xor esi,edx
015B3EA8    23F7            and esi,edi
015B3EAA    33F1            xor esi,ecx
015B3EAC    03F3            add esi,ebx
015B3EAE    8DAC2E 40B340C0 lea ebp,dword ptr ds:[esi+ebp+0xC040B340]
015B3EB5    8BF5            mov esi,ebp
015B3EB7    C1EE 17         shr esi,0x17
015B3EBA    C1E5 09         shl ebp,0x9
015B3EBD    0BF5            or esi,ebp
015B3EBF    8B68 2C         mov ebp,dword ptr ds:[eax+0x2C]
015B3EC2    03F2            add esi,edx
015B3EC4    8BDE            mov ebx,esi
015B3EC6    33DA            xor ebx,edx
015B3EC8    23D9            and ebx,ecx
015B3ECA    33DA            xor ebx,edx
015B3ECC    03DD            add ebx,ebp
015B3ECE    8DBC1F 515A5E26 lea edi,dword ptr ds:[edi+ebx+0x265E5A51]
015B3ED5    8BDF            mov ebx,edi
015B3ED7    C1E7 0E         shl edi,0xE
015B3EDA    C1EB 12         shr ebx,0x12
015B3EDD    0BDF            or ebx,edi
015B3EDF    03DE            add ebx,esi
015B3EE1    8BFE            mov edi,esi
015B3EE3    33FB            xor edi,ebx
015B3EE5    23FA            and edi,edx
015B3EE7    8B28            mov ebp,dword ptr ds:[eax]
015B3EE9    33FE            xor edi,esi
015B3EEB    03FD            add edi,ebp
015B3EED    8D8C39 AAC7B6E9 lea ecx,dword ptr ds:[ecx+edi+0xE9B6C7AA]
015B3EF4    8B68 14         mov ebp,dword ptr ds:[eax+0x14]
015B3EF7    8BF9            mov edi,ecx
015B3EF9    C1E9 0C         shr ecx,0xC
015B3EFC    C1E7 14         shl edi,0x14
015B3EFF    0BF9            or edi,ecx
015B3F01    03FB            add edi,ebx
015B3F03    8BCB            mov ecx,ebx
015B3F05    33CF            xor ecx,edi
015B3F07    23CE            and ecx,esi
015B3F09    33CB            xor ecx,ebx
015B3F0B    03CD            add ecx,ebp
015B3F0D    8D940A 5D102FD6 lea edx,dword ptr ds:[edx+ecx+0xD62F105D]
015B3F14    8B68 28         mov ebp,dword ptr ds:[eax+0x28]
015B3F17    8BCA            mov ecx,edx
015B3F19    C1E2 05         shl edx,0x5
015B3F1C    C1E9 1B         shr ecx,0x1B
015B3F1F    0BCA            or ecx,edx
015B3F21    03CF            add ecx,edi
015B3F23    8BD7            mov edx,edi
015B3F25    33D1            xor edx,ecx
015B3F27    23D3            and edx,ebx
015B3F29    33D7            xor edx,edi
015B3F2B    03D5            add edx,ebp
015B3F2D    8B68 3C         mov ebp,dword ptr ds:[eax+0x3C]
015B3F30    8DB416 53144402 lea esi,dword ptr ds:[esi+edx+0x2441453]
015B3F37    8BD6            mov edx,esi
015B3F39    C1E6 09         shl esi,0x9
015B3F3C    C1EA 17         shr edx,0x17
015B3F3F    0BD6            or edx,esi
015B3F41    03D1            add edx,ecx
015B3F43    8BF2            mov esi,edx
015B3F45    33F1            xor esi,ecx
015B3F47    23F7            and esi,edi
015B3F49    33F1            xor esi,ecx
015B3F4B    03F5            add esi,ebp
015B3F4D    8B68 10         mov ebp,dword ptr ds:[eax+0x10]
015B3F50    8D9C33 81E6A1D8 lea ebx,dword ptr ds:[ebx+esi+0xD8A1E681]
015B3F57    8BF3            mov esi,ebx
015B3F59    C1E3 0E         shl ebx,0xE
015B3F5C    C1EE 12         shr esi,0x12
015B3F5F    0BF3            or esi,ebx
015B3F61    03F2            add esi,edx
015B3F63    8BDA            mov ebx,edx
015B3F65    33DE            xor ebx,esi
015B3F67    23D9            and ebx,ecx
015B3F69    33DA            xor ebx,edx
015B3F6B    03DD            add ebx,ebp
015B3F6D    8B68 24         mov ebp,dword ptr ds:[eax+0x24]
015B3F70    8DBC1F C8FBD3E7 lea edi,dword ptr ds:[edi+ebx+0xE7D3FBC8]
015B3F77    8BDF            mov ebx,edi
015B3F79    C1EF 0C         shr edi,0xC
015B3F7C    C1E3 14         shl ebx,0x14
015B3F7F    0BDF            or ebx,edi
015B3F81    03DE            add ebx,esi
015B3F83    8BFE            mov edi,esi
015B3F85    33FB            xor edi,ebx
015B3F87    23FA            and edi,edx
015B3F89    33FE            xor edi,esi
015B3F8B    03FD            add edi,ebp
015B3F8D    8D8C39 E6CDE121 lea ecx,dword ptr ds:[ecx+edi+0x21E1CDE6]
015B3F94    8BF9            mov edi,ecx
015B3F96    C1E1 05         shl ecx,0x5
015B3F99    C1EF 1B         shr edi,0x1B
015B3F9C    0BF9            or edi,ecx
015B3F9E    8B48 38         mov ecx,dword ptr ds:[eax+0x38]
015B3FA1    03FB            add edi,ebx
015B3FA3    8BEB            mov ebp,ebx
015B3FA5    33EF            xor ebp,edi
015B3FA7    23EE            and ebp,esi
015B3FA9    33EB            xor ebp,ebx
015B3FAB    03E9            add ebp,ecx
015B3FAD    8D942A D60737C3 lea edx,dword ptr ds:[edx+ebp+0xC33707D6]
015B3FB4    8BCA            mov ecx,edx
015B3FB6    C1E9 17         shr ecx,0x17
015B3FB9    C1E2 09         shl edx,0x9
015B3FBC    0BCA            or ecx,edx
015B3FBE    03CF            add ecx,edi
015B3FC0    8B68 0C         mov ebp,dword ptr ds:[eax+0xC]
015B3FC3    8BD1            mov edx,ecx
015B3FC5    33D7            xor edx,edi
015B3FC7    23D3            and edx,ebx
015B3FC9    33D7            xor edx,edi
015B3FCB    03D5            add edx,ebp
015B3FCD    8DB416 870DD5F4 lea esi,dword ptr ds:[esi+edx+0xF4D50D87]
015B3FD4    8BE9            mov ebp,ecx
015B3FD6    8BD6            mov edx,esi
015B3FD8    C1E6 0E         shl esi,0xE
015B3FDB    C1EA 12         shr edx,0x12
015B3FDE    0BD6            or edx,esi
015B3FE0    03D1            add edx,ecx
015B3FE2    8B70 20         mov esi,dword ptr ds:[eax+0x20]
015B3FE5    33EA            xor ebp,edx
015B3FE7    23EF            and ebp,edi
015B3FE9    33E9            xor ebp,ecx
015B3FEB    03EE            add ebp,esi
015B3FED    8D9C2B ED145A45 lea ebx,dword ptr ds:[ebx+ebp+0x455A14ED]
015B3FF4    8B68 34         mov ebp,dword ptr ds:[eax+0x34]
015B3FF7    8BF3            mov esi,ebx
015B3FF9    C1EB 0C         shr ebx,0xC
015B3FFC    C1E6 14         shl esi,0x14
015B3FFF    0BF3            or esi,ebx
015B4001    03F2            add esi,edx
015B4003    8BDA            mov ebx,edx
015B4005    33DE            xor ebx,esi
015B4007    23D9            and ebx,ecx
015B4009    33DA            xor ebx,edx
015B400B    03DD            add ebx,ebp
015B400D    8DBC1F 05E9E3A9 lea edi,dword ptr ds:[edi+ebx+0xA9E3E905]
015B4014    8BDF            mov ebx,edi
015B4016    C1E7 05         shl edi,0x5
015B4019    C1EB 1B         shr ebx,0x1B
015B401C    0BDF            or ebx,edi
015B401E    8B78 08         mov edi,dword ptr ds:[eax+0x8]
015B4021    03DE            add ebx,esi
015B4023    8BEE            mov ebp,esi
015B4025    33EB            xor ebp,ebx
015B4027    23EA            and ebp,edx
015B4029    33EE            xor ebp,esi
015B402B    03EF            add ebp,edi
015B402D    8D8C29 F8A3EFFC lea ecx,dword ptr ds:[ecx+ebp+0xFCEFA3F8]
015B4034    8B68 1C         mov ebp,dword ptr ds:[eax+0x1C]
015B4037    897C24 10       mov dword ptr ss:[esp+0x10],edi
015B403B    8BF9            mov edi,ecx
015B403D    C1E1 09         shl ecx,0x9
015B4040    C1EF 17         shr edi,0x17
015B4043    0BF9            or edi,ecx
015B4045    03FB            add edi,ebx
015B4047    8BCF            mov ecx,edi
015B4049    33CB            xor ecx,ebx
015B404B    23CE            and ecx,esi
015B404D    33CB            xor ecx,ebx
015B404F    03CD            add ecx,ebp
015B4051    8D940A D9026F67 lea edx,dword ptr ds:[edx+ecx+0x676F02D9]
015B4058    8BEA            mov ebp,edx
015B405A    C1E2 0E         shl edx,0xE
015B405D    C1ED 12         shr ebp,0x12
015B4060    0BEA            or ebp,edx
015B4062    8B50 30         mov edx,dword ptr ds:[eax+0x30]
015B4065    03EF            add ebp,edi
015B4067    8BCF            mov ecx,edi
015B4069    33CD            xor ecx,ebp
015B406B    894C24 50       mov dword ptr ss:[esp+0x50],ecx
015B406F    23CB            and ecx,ebx
015B4071    33CF            xor ecx,edi
015B4073    03CA            add ecx,edx
015B4075    8B5424 50       mov edx,dword ptr ss:[esp+0x50]
015B4079    8DB40E 8A4C2A8D lea esi,dword ptr ds:[esi+ecx+0x8D2A4C8A]
015B4080    8BCE            mov ecx,esi
015B4082    C1E1 14         shl ecx,0x14
015B4085    C1EE 0C         shr esi,0xC
015B4088    0BCE            or ecx,esi
015B408A    8B70 14         mov esi,dword ptr ds:[eax+0x14]
015B408D    03CD            add ecx,ebp
015B408F    33D1            xor edx,ecx
015B4091    03D6            add edx,esi
015B4093    8D9C13 4239FAFF lea ebx,dword ptr ds:[ebx+edx+0xFFFA3942]
015B409A    897424 20       mov dword ptr ss:[esp+0x20],esi
015B409E    8BD3            mov edx,ebx
015B40A0    C1E3 04         shl ebx,0x4
015B40A3    8BF5            mov esi,ebp
015B40A5    33F1            xor esi,ecx
015B40A7    C1EA 1C         shr edx,0x1C
015B40AA    0BD3            or edx,ebx
015B40AC    8B58 20         mov ebx,dword ptr ds:[eax+0x20]
015B40AF    03D1            add edx,ecx
015B40B1    33F2            xor esi,edx
015B40B3    03F3            add esi,ebx
015B40B5    8DBC37 81F67187 lea edi,dword ptr ds:[edi+esi+0x8771F681]
015B40BC    8BF7            mov esi,edi
015B40BE    C1E7 0B         shl edi,0xB
015B40C1    C1EE 15         shr esi,0x15
015B40C4    0BF7            or esi,edi
015B40C6    8B78 2C         mov edi,dword ptr ds:[eax+0x2C]
015B40C9    03F2            add esi,edx
015B40CB    8BDE            mov ebx,esi
015B40CD    33D9            xor ebx,ecx
015B40CF    33DA            xor ebx,edx
015B40D1    03DF            add ebx,edi
015B40D3    8DAC2B 22619D6D lea ebp,dword ptr ds:[ebx+ebp+0x6D9D6122]
015B40DA    897C24 40       mov dword ptr ss:[esp+0x40],edi
015B40DE    8BFD            mov edi,ebp
015B40E0    C1E5 10         shl ebp,0x10
015B40E3    C1EF 10         shr edi,0x10
015B40E6    0BFD            or edi,ebp
015B40E8    03FE            add edi,esi
015B40EA    8BDE            mov ebx,esi
015B40EC    33DF            xor ebx,edi
015B40EE    8BEB            mov ebp,ebx
015B40F0    33EA            xor ebp,edx
015B40F2    0368 38         add ebp,dword ptr ds:[eax+0x38]
015B40F5    8DAC29 0C38E5FD lea ebp,dword ptr ds:[ecx+ebp+0xFDE5380C]
015B40FC    8BCD            mov ecx,ebp
015B40FE    C1ED 09         shr ebp,0x9
015B4101    C1E1 17         shl ecx,0x17
015B4104    0BCD            or ecx,ebp
015B4106    8B68 04         mov ebp,dword ptr ds:[eax+0x4]
015B4109    03CF            add ecx,edi
015B410B    33D9            xor ebx,ecx
015B410D    03DD            add ebx,ebp
015B410F    8D9C1A 44EABEA4 lea ebx,dword ptr ds:[edx+ebx+0xA4BEEA44]
015B4116    896C24 2C       mov dword ptr ss:[esp+0x2C],ebp
015B411A    8BD3            mov edx,ebx
015B411C    C1E3 04         shl ebx,0x4
015B411F    8BEF            mov ebp,edi
015B4121    33E9            xor ebp,ecx
015B4123    C1EA 1C         shr edx,0x1C
015B4126    0BD3            or edx,ebx
015B4128    8B58 10         mov ebx,dword ptr ds:[eax+0x10]
015B412B    03D1            add edx,ecx
015B412D    33EA            xor ebp,edx
015B412F    03EB            add ebp,ebx
015B4131    8DB42E A9CFDE4B lea esi,dword ptr ds:[esi+ebp+0x4BDECFA9]
015B4138    895C24 3C       mov dword ptr ss:[esp+0x3C],ebx
015B413C    8BDE            mov ebx,esi
015B413E    C1E6 0B         shl esi,0xB
015B4141    C1EB 15         shr ebx,0x15
015B4144    0BDE            or ebx,esi
015B4146    8B70 1C         mov esi,dword ptr ds:[eax+0x1C]
015B4149    03DA            add ebx,edx
015B414B    8BEB            mov ebp,ebx
015B414D    33E9            xor ebp,ecx
015B414F    33EA            xor ebp,edx
015B4151    03EE            add ebp,esi
015B4153    8DBC2F 604BBBF6 lea edi,dword ptr ds:[edi+ebp+0xF6BB4B60]
015B415A    897424 18       mov dword ptr ss:[esp+0x18],esi
015B415E    8BF7            mov esi,edi
015B4160    C1E7 10         shl edi,0x10
015B4163    C1EE 10         shr esi,0x10
015B4166    0BF7            or esi,edi
015B4168    03F3            add esi,ebx
015B416A    8BFB            mov edi,ebx
015B416C    33FE            xor edi,esi
015B416E    8BEF            mov ebp,edi
015B4170    897C24 50       mov dword ptr ss:[esp+0x50],edi
015B4174    8B78 28         mov edi,dword ptr ds:[eax+0x28]
015B4177    33EA            xor ebp,edx
015B4179    03EF            add ebp,edi
015B417B    897C24 28       mov dword ptr ss:[esp+0x28],edi
015B417F    8DBC29 70BCBFBE lea edi,dword ptr ds:[ecx+ebp+0xBEBFBC70]
015B4186    8B68 34         mov ebp,dword ptr ds:[eax+0x34]
015B4189    8BCF            mov ecx,edi
015B418B    C1EF 09         shr edi,0x9
015B418E    C1E1 17         shl ecx,0x17
015B4191    0BCF            or ecx,edi
015B4193    8B7C24 50       mov edi,dword ptr ss:[esp+0x50]
015B4197    03CE            add ecx,esi
015B4199    33F9            xor edi,ecx
015B419B    03FD            add edi,ebp
015B419D    8DBC3A C67E9B28 lea edi,dword ptr ds:[edx+edi+0x289B7EC6]
015B41A4    8BD7            mov edx,edi
015B41A6    896C24 38       mov dword ptr ss:[esp+0x38],ebp
015B41AA    8BEE            mov ebp,esi
015B41AC    33E9            xor ebp,ecx
015B41AE    C1E7 04         shl edi,0x4
015B41B1    C1EA 1C         shr edx,0x1C
015B41B4    0BD7            or edx,edi
015B41B6    8B38            mov edi,dword ptr ds:[eax]
015B41B8    03D1            add edx,ecx
015B41BA    33EA            xor ebp,edx
015B41BC    03EF            add ebp,edi
015B41BE    8D9C2B FA27A1EA lea ebx,dword ptr ds:[ebx+ebp+0xEAA127FA]
015B41C5    897C24 14       mov dword ptr ss:[esp+0x14],edi
015B41C9    8BFB            mov edi,ebx
015B41CB    C1EF 15         shr edi,0x15
015B41CE    C1E3 0B         shl ebx,0xB
015B41D1    0BFB            or edi,ebx
015B41D3    8B58 0C         mov ebx,dword ptr ds:[eax+0xC]
015B41D6    03FA            add edi,edx
015B41D8    8BEF            mov ebp,edi
015B41DA    33E9            xor ebp,ecx
015B41DC    33EA            xor ebp,edx
015B41DE    03EB            add ebp,ebx
015B41E0    8DB42E 8530EFD4 lea esi,dword ptr ds:[esi+ebp+0xD4EF3085]
015B41E7    895C24 24       mov dword ptr ss:[esp+0x24],ebx
015B41EB    8BDE            mov ebx,esi
015B41ED    C1E6 10         shl esi,0x10
015B41F0    C1EB 10         shr ebx,0x10
015B41F3    0BDE            or ebx,esi
015B41F5    03DF            add ebx,edi
015B41F7    8BF7            mov esi,edi
015B41F9    33F3            xor esi,ebx
015B41FB    8BEE            mov ebp,esi
015B41FD    897424 50       mov dword ptr ss:[esp+0x50],esi
015B4201    8B70 18         mov esi,dword ptr ds:[eax+0x18]
015B4204    897424 34       mov dword ptr ss:[esp+0x34],esi
015B4208    33EA            xor ebp,edx
015B420A    03EE            add ebp,esi
015B420C    8DB429 051D8804 lea esi,dword ptr ds:[ecx+ebp+0x4881D05]
015B4213    8B68 24         mov ebp,dword ptr ds:[eax+0x24]
015B4216    8BCE            mov ecx,esi
015B4218    C1EE 09         shr esi,0x9
015B421B    C1E1 17         shl ecx,0x17
015B421E    0BCE            or ecx,esi
015B4220    8B7424 50       mov esi,dword ptr ss:[esp+0x50]
015B4224    03CB            add ecx,ebx
015B4226    33F1            xor esi,ecx
015B4228    03F5            add esi,ebp
015B422A    8DB432 39D0D4D9 lea esi,dword ptr ds:[edx+esi+0xD9D4D039]
015B4231    8BD6            mov edx,esi
015B4233    C1E6 04         shl esi,0x4
015B4236    C1EA 1C         shr edx,0x1C
015B4239    0BD6            or edx,esi
015B423B    03D1            add edx,ecx
015B423D    8BF3            mov esi,ebx
015B423F    33F1            xor esi,ecx
015B4241    33F2            xor esi,edx
015B4243    896C24 44       mov dword ptr ss:[esp+0x44],ebp
015B4247    8B68 30         mov ebp,dword ptr ds:[eax+0x30]
015B424A    8B40 3C         mov eax,dword ptr ds:[eax+0x3C]
015B424D    03F5            add esi,ebp
015B424F    8DBC37 E599DBE6 lea edi,dword ptr ds:[edi+esi+0xE6DB99E5]
015B4256    8BF7            mov esi,edi
015B4258    C1E7 0B         shl edi,0xB
015B425B    C1EE 15         shr esi,0x15
015B425E    0BF7            or esi,edi
015B4260    03F2            add esi,edx
015B4262    8BFE            mov edi,esi
015B4264    33F9            xor edi,ecx
015B4266    894424 50       mov dword ptr ss:[esp+0x50],eax
015B426A    33FA            xor edi,edx
015B426C    03F8            add edi,eax
015B426E    8D9C3B F87CA21F lea ebx,dword ptr ds:[ebx+edi+0x1FA27CF8]
015B4275    8BFB            mov edi,ebx
015B4277    C1E3 10         shl ebx,0x10
015B427A    C1EF 10         shr edi,0x10
015B427D    0BFB            or edi,ebx
015B427F    8B5C24 10       mov ebx,dword ptr ss:[esp+0x10]
015B4283    03FE            add edi,esi
015B4285    8BC6            mov eax,esi
015B4287    33C7            xor eax,edi
015B4289    33C2            xor eax,edx
015B428B    03C3            add eax,ebx
015B428D    8D9C01 6556ACC4 lea ebx,dword ptr ds:[ecx+eax+0xC4AC5665]
015B4294    8BCB            mov ecx,ebx
015B4296    C1EB 09         shr ebx,0x9
015B4299    C1E1 17         shl ecx,0x17
015B429C    0BCB            or ecx,ebx
015B429E    8B5C24 14       mov ebx,dword ptr ss:[esp+0x14]
015B42A2    03CF            add ecx,edi
015B42A4    8BC6            mov eax,esi
015B42A6    F7D0            not eax
015B42A8    0BC1            or eax,ecx
015B42AA    33C7            xor eax,edi
015B42AC    03C3            add eax,ebx
015B42AE    8D9C02 442229F4 lea ebx,dword ptr ds:[edx+eax+0xF4292244]
015B42B5    8BD3            mov edx,ebx
015B42B7    C1E3 06         shl ebx,0x6
015B42BA    C1EA 1A         shr edx,0x1A
015B42BD    0BD3            or edx,ebx
015B42BF    8B5C24 18       mov ebx,dword ptr ss:[esp+0x18]
015B42C3    03D1            add edx,ecx
015B42C5    8BC7            mov eax,edi
015B42C7    F7D0            not eax
015B42C9    0BC2            or eax,edx
015B42CB    33C1            xor eax,ecx
015B42CD    03C3            add eax,ebx
015B42CF    8D9C06 97FF2A43 lea ebx,dword ptr ds:[esi+eax+0x432AFF97]
015B42D6    8BF3            mov esi,ebx
015B42D8    C1E3 0A         shl ebx,0xA
015B42DB    C1EE 16         shr esi,0x16
015B42DE    0BF3            or esi,ebx
015B42E0    8B5C24 1C       mov ebx,dword ptr ss:[esp+0x1C]
015B42E4    03F2            add esi,edx
015B42E6    8BC1            mov eax,ecx
015B42E8    F7D0            not eax
015B42EA    0BC6            or eax,esi
015B42EC    33C2            xor eax,edx
015B42EE    03C3            add eax,ebx
015B42F0    8D9C07 A72394AB lea ebx,dword ptr ds:[edi+eax+0xAB9423A7]
015B42F7    8BFB            mov edi,ebx
015B42F9    C1E3 0F         shl ebx,0xF
015B42FC    C1EF 11         shr edi,0x11
015B42FF    0BFB            or edi,ebx
015B4301    8B5C24 20       mov ebx,dword ptr ss:[esp+0x20]
015B4305    8BC2            mov eax,edx
015B4307    F7D0            not eax
015B4309    03FE            add edi,esi
015B430B    0BC7            or eax,edi
015B430D    33C6            xor eax,esi
015B430F    03C3            add eax,ebx
015B4311    8D9C01 39A093FC lea ebx,dword ptr ds:[ecx+eax+0xFC93A039]
015B4318    8BCB            mov ecx,ebx
015B431A    C1EB 0B         shr ebx,0xB
015B431D    C1E1 15         shl ecx,0x15
015B4320    0BCB            or ecx,ebx
015B4322    03CF            add ecx,edi
015B4324    8BC6            mov eax,esi
015B4326    F7D0            not eax
015B4328    0BC1            or eax,ecx
015B432A    33C7            xor eax,edi
015B432C    03C5            add eax,ebp
015B432E    8D9C02 C3595B65 lea ebx,dword ptr ds:[edx+eax+0x655B59C3]
015B4335    8BD3            mov edx,ebx
015B4337    C1EA 1A         shr edx,0x1A
015B433A    C1E3 06         shl ebx,0x6
015B433D    0BD3            or edx,ebx
015B433F    8BC7            mov eax,edi
015B4341    03D1            add edx,ecx
015B4343    F7D0            not eax
015B4345    0BC2            or eax,edx
015B4347    33C1            xor eax,ecx
015B4349    034424 24       add eax,dword ptr ss:[esp+0x24]
015B434D    8D9C06 92CC0C8F lea ebx,dword ptr ds:[esi+eax+0x8F0CCC92]
015B4354    8BF3            mov esi,ebx
015B4356    C1EE 16         shr esi,0x16
015B4359    C1E3 0A         shl ebx,0xA
015B435C    0BF3            or esi,ebx
015B435E    8B5C24 28       mov ebx,dword ptr ss:[esp+0x28]
015B4362    03F2            add esi,edx
015B4364    8BC1            mov eax,ecx
015B4366    F7D0            not eax
015B4368    0BC6            or eax,esi
015B436A    33C2            xor eax,edx
015B436C    03C3            add eax,ebx
015B436E    8D9C07 7DF4EFFF lea ebx,dword ptr ds:[edi+eax+0xFFEFF47D]
015B4375    8BFB            mov edi,ebx
015B4377    C1EF 11         shr edi,0x11
015B437A    C1E3 0F         shl ebx,0xF
015B437D    0BFB            or edi,ebx
015B437F    8B5C24 2C       mov ebx,dword ptr ss:[esp+0x2C]
015B4383    03FE            add edi,esi
015B4385    8BC2            mov eax,edx
015B4387    F7D0            not eax
015B4389    0BC7            or eax,edi
015B438B    33C6            xor eax,esi
015B438D    03C3            add eax,ebx
015B438F    8D9C01 D15D8485 lea ebx,dword ptr ds:[ecx+eax+0x85845DD1]
015B4396    8BC6            mov eax,esi
015B4398    8B6C24 50       mov ebp,dword ptr ss:[esp+0x50]
015B439C    F7D0            not eax
015B439E    8BCB            mov ecx,ebx
015B43A0    C1E1 15         shl ecx,0x15
015B43A3    C1EB 0B         shr ebx,0xB
015B43A6    0BCB            or ecx,ebx
015B43A8    8B5C24 30       mov ebx,dword ptr ss:[esp+0x30]
015B43AC    03CF            add ecx,edi
015B43AE    0BC1            or eax,ecx
015B43B0    33C7            xor eax,edi
015B43B2    03C3            add eax,ebx
015B43B4    8D9C02 4F7EA86F lea ebx,dword ptr ds:[edx+eax+0x6FA87E4F]
015B43BB    8BC7            mov eax,edi
015B43BD    8BD3            mov edx,ebx
015B43BF    C1EA 1A         shr edx,0x1A
015B43C2    F7D0            not eax
015B43C4    C1E3 06         shl ebx,0x6
015B43C7    0BD3            or edx,ebx
015B43C9    03D1            add edx,ecx
015B43CB    0BC2            or eax,edx
015B43CD    33C1            xor eax,ecx
015B43CF    03C5            add eax,ebp
015B43D1    8B6C24 34       mov ebp,dword ptr ss:[esp+0x34]
015B43D5    8DB406 E0E62CFE lea esi,dword ptr ds:[esi+eax+0xFE2CE6E0]
015B43DC    8BC6            mov eax,esi
015B43DE    C1E6 0A         shl esi,0xA
015B43E1    C1E8 16         shr eax,0x16
015B43E4    0BC6            or eax,esi
015B43E6    8BF1            mov esi,ecx
015B43E8    F7D6            not esi
015B43EA    03C2            add eax,edx
015B43EC    0BF0            or esi,eax
015B43EE    33F2            xor esi,edx
015B43F0    03F5            add esi,ebp
015B43F2    8B6C24 38       mov ebp,dword ptr ss:[esp+0x38]
015B43F6    8DBC37 144301A3 lea edi,dword ptr ds:[edi+esi+0xA3014314]
015B43FD    8BF7            mov esi,edi
015B43FF    C1E7 0F         shl edi,0xF
015B4402    C1EE 11         shr esi,0x11
015B4405    0BF7            or esi,edi
015B4407    8BFA            mov edi,edx
015B4409    F7D7            not edi
015B440B    03F0            add esi,eax
015B440D    0BFE            or edi,esi
015B440F    33F8            xor edi,eax
015B4411    03FD            add edi,ebp
015B4413    8DBC39 A111084E lea edi,dword ptr ds:[ecx+edi+0x4E0811A1]
015B441A    8BCF            mov ecx,edi
015B441C    C1EF 0B         shr edi,0xB
015B441F    C1E1 15         shl ecx,0x15
015B4422    0BCF            or ecx,edi
015B4424    03CE            add ecx,esi
015B4426    8BF8            mov edi,eax
015B4428    8B6C24 3C       mov ebp,dword ptr ss:[esp+0x3C]
015B442C    F7D7            not edi
015B442E    0BF9            or edi,ecx
015B4430    33FE            xor edi,esi
015B4432    03FD            add edi,ebp
015B4434    8B6C24 40       mov ebp,dword ptr ss:[esp+0x40]
015B4438    8DBC3A 827E53F7 lea edi,dword ptr ds:[edx+edi+0xF7537E82]
015B443F    8BD7            mov edx,edi
015B4441    C1E7 06         shl edi,0x6
015B4444    C1EA 1A         shr edx,0x1A
015B4447    0BD7            or edx,edi
015B4449    03D1            add edx,ecx
015B444B    8B5C24 10       mov ebx,dword ptr ss:[esp+0x10]
015B444F    8BFE            mov edi,esi
015B4451    F7D7            not edi
015B4453    0BFA            or edi,edx
015B4455    33F9            xor edi,ecx
015B4457    03FD            add edi,ebp
015B4459    8D8438 35F23ABD lea eax,dword ptr ds:[eax+edi+0xBD3AF235]
015B4460    8BF8            mov edi,eax
015B4462    C1E0 0A         shl eax,0xA
015B4465    C1EF 16         shr edi,0x16
015B4468    0BF8            or edi,eax
015B446A    03FA            add edi,edx
015B446C    8BC1            mov eax,ecx
015B446E    F7D0            not eax
015B4470    0BC7            or eax,edi
015B4472    33C2            xor eax,edx
015B4474    03C3            add eax,ebx
015B4476    8DB406 BBD2D72A lea esi,dword ptr ds:[esi+eax+0x2AD7D2BB]
015B447D    8BDE            mov ebx,esi
015B447F    C1E6 0F         shl esi,0xF
015B4482    C1EB 11         shr ebx,0x11
015B4485    0BDE            or ebx,esi
015B4487    8B7424 44       mov esi,dword ptr ss:[esp+0x44]
015B448B    8BC2            mov eax,edx
015B448D    03DF            add ebx,edi
015B448F    F7D0            not eax
015B4491    0BC3            or eax,ebx
015B4493    33C7            xor eax,edi
015B4495    03C6            add eax,esi
015B4497    8D8C01 91D386EB lea ecx,dword ptr ds:[ecx+eax+0xEB86D391]
015B449E    8B4424 4C       mov eax,dword ptr ss:[esp+0x4C]
015B44A2    8B30            mov esi,dword ptr ds:[eax]
015B44A4    03F2            add esi,edx
015B44A6    8BD1            mov edx,ecx
015B44A8    C1E9 0B         shr ecx,0xB
015B44AB    C1E2 15         shl edx,0x15
015B44AE    0BD1            or edx,ecx
015B44B0    8B48 08         mov ecx,dword ptr ds:[eax+0x8]
015B44B3    03CB            add ecx,ebx
015B44B5    8930            mov dword ptr ds:[eax],esi
015B44B7    0350 04         add edx,dword ptr ds:[eax+0x4]
015B44BA    8948 08         mov dword ptr ds:[eax+0x8],ecx
015B44BD    8B48 0C         mov ecx,dword ptr ds:[eax+0xC]
015B44C0    03D3            add edx,ebx
015B44C2    03CF            add ecx,edi
015B44C4    5F              pop edi
015B44C5    5E              pop esi
015B44C6    5D              pop ebp
015B44C7    8950 04         mov dword ptr ds:[eax+0x4],edx
015B44CA    8948 0C         mov dword ptr ds:[eax+0xC],ecx
015B44CD    5B              pop ebx
015B44CE    83C4 38         add esp,0x38
015B44D1    C3              retn
