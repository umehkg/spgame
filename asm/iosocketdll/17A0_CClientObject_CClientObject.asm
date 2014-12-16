___:100017A0 ; Exported entry   1. ??0CClientObject@@QAE@ABV0@@Z
___:100017A0
___:100017A0 ; =============== S U B R O U T I N E =======================================
___:100017A0
___:100017A0
___:100017A0 ; public: __thiscall CClientObject::CClientObject(class CClientObject const &)
___:100017A0                 public ??0CClientObject@@QAE@ABV0@@Z
___:100017A0 ??0CClientObject@@QAE@ABV0@@Z proc near ; DATA XREF: Themida_:off_1009EB3Do
___:100017A0
___:100017A0 arg_0           = dword ptr  4
___:100017A0
___:100017A0                 mov     edx, [esp+arg_0]
___:100017A4                 mov     eax, ecx
___:100017A6                 mov     dword ptr [eax], 15B50B8h
___:100017AC                 mov     cl, [edx+4]
___:100017AF                 mov     [eax+4], cl
___:100017B2                 mov     ecx, [edx+8]
___:100017B5                 mov     [eax+8], ecx
___:100017B8                 mov     dword ptr [eax+0Ch], 15B50BCh
___:100017BF                 push    esi
___:100017C0                 push    edi
___:100017C1                 lea     esi, [edx+10h]
___:100017C4                 mov     ecx, 2000h
___:100017C9                 lea     edi, [eax+10h]
___:100017CC                 rep movsd
___:100017CE                 mov     ecx, [edx+8010h]
___:100017D4                 mov     [eax+8010h], ecx
___:100017DA                 mov     ecx, [edx+8014h]
___:100017E0                 mov     [eax+8014h], ecx
___:100017E6                 mov     ecx, [edx+8018h]
___:100017EC                 mov     [eax+8018h], ecx
___:100017F2                 mov     cl, [edx+801Ch]
___:100017F8                 mov     [eax+801Ch], cl
___:100017FE                 lea     esi, [edx+8020h]
___:10001804                 mov     ecx, 1006h
___:10001809                 lea     edi, [eax+8020h]
___:1000180F                 rep movsd
___:10001811                 mov     ecx, [edx+0C038h]
___:10001817                 mov     [eax+0C038h], ecx
___:1000181D                 mov     ecx, [edx+0C03Ch]
___:10001823                 mov     [eax+0C03Ch], ecx
___:10001829                 mov     ecx, [edx+0C040h]
___:1000182F                 mov     [eax+0C040h], ecx
___:10001835                 mov     ecx, [edx+0C044h]
___:1000183B                 mov     [eax+0C044h], ecx
___:10001841                 mov     ecx, [edx+0C048h]
___:10001847                 mov     [eax+0C048h], ecx
___:1000184D                 mov     edx, [edx+0C04Ch]
___:10001853                 pop     edi
___:10001854                 mov     [eax+0C04Ch], edx
___:1000185A                 pop     esi
___:1000185B                 retn    4
___:1000185B ??0CClientObject@@QAE@ABV0@@Z endp
___:1000185B
___:1000185B ; ---------------------------------------------------------------------------
