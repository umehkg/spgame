___:10001950 ; Exported entry   3. ??0CClientObject@@QAE@XZ
___:10001950
___:10001950 ; =============== S U B R O U T I N E =======================================
___:10001950
___:10001950
___:10001950 ; public: __thiscall CClientObject::CClientObject(void)
___:10001950                 public ??0CClientObject@@QAE@XZ
___:10001950 ??0CClientObject@@QAE@XZ proc near      ; DATA XREF: Themida_:off_1009EB3Do
___:10001950
___:10001950 var_10          = dword ptr -10h
___:10001950 var_C           = dword ptr -0Ch
___:10001950 var_4           = dword ptr -4
___:10001950
___:10001950                 push    0FFFFFFFFh
___:10001952                 push    15B4ABBh
___:10001957                 mov     eax, large fs:0
___:1000195D                 push    eax
___:1000195E                 mov     large fs:0, esp
___:10001965                 push    ecx
___:10001966                 push    ebx
___:10001967                 push    ebp
___:10001968                 push    esi
___:10001969                 mov     esi, ecx
___:1000196B                 push    edi
___:1000196C                 lea     edi, [esi+0Ch]
___:1000196F                 mov     ecx, edi
___:10001971                 mov     [esp+20h+var_10], esi
___:10001975                 mov     dword ptr [esi], 15B50B8h
___:1000197B                 call    near ptr ??0SendBuffer@@QAE@XZ ; SendBuffer::SendBuffer(void)
___:10001980                 lea     ebp, [esi+8020h]
___:10001986                 mov     ecx, ebp
___:10001988                 mov     [esp+20h+var_4], 0
___:10001990                 call    ??0CGenericMessage@@QAE@XZ ; CGenericMessage::CGenericMessage(void)
___:10001995                 lea     ebx, [esi+0C038h]
___:1000199B                 mov     ecx, ebx
___:1000199D                 call    near ptr dword_10003C20
___:100019A2                 lea     ecx, [esi+0C03Ch]
___:100019A8                 call    near ptr dword_10003C20
___:100019AD                 mov     ecx, edi
___:100019AF                 mov     dword ptr [esi+8], 0FFFFFFFFh
___:100019B6                 mov     byte ptr [esi+4], 0
___:100019BA                 call    near ptr ?InitBuffer@SendBuffer@@QAEXXZ ; SendBuffer::InitBuffer(void)
___:100019BF                 mov     ecx, ebp
___:100019C1                 call    near ptr ?InitBuffer@RecvBuffer@@QAEXXZ ; RecvBuffer::InitBuffer(void)
___:100019C6                 mov     ecx, ebx
___:100019C8                 call    near ptr dword_10003BC0
___:100019CD                 lea     ecx, [esi+0C03Ch]
___:100019D3                 call    near ptr dword_10003BC0
___:100019D8                 mov     ecx, [esp+20h+var_C]
___:100019DC                 xor     eax, eax
___:100019DE                 mov     [esi+0C040h], eax
___:100019E4                 mov     [esi+0C044h], eax
___:100019EA                 mov     [esi+0C048h], eax
___:100019F0                 mov     [esi+0C04Ch], eax
___:100019F6                 pop     edi
___:100019F7                 mov     eax, esi
___:100019F9                 pop     esi
___:100019FA                 pop     ebp
___:100019FB                 pop     ebx
___:100019FC                 mov     large fs:0, ecx
___:10001A03                 add     esp, 10h
___:10001A06                 retn
___:10001A06 ??0CClientObject@@QAE@XZ endp
___:10001A06
___:10001A06 ; ---------------------------------------------------------------------------
