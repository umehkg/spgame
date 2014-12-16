___:10001A10 ; Exported entry   2. ??0CClientObject@@QAE@I@Z
___:10001A10
___:10001A10 ; =============== S U B R O U T I N E =======================================
___:10001A10
___:10001A10
___:10001A10 ; public: __thiscall CClientObject::CClientObject(unsigned int)
___:10001A10                 public ??0CClientObject@@QAE@I@Z
___:10001A10 ??0CClientObject@@QAE@I@Z proc near     ; DATA XREF: Themida_:off_1009EB3Do
___:10001A10
___:10001A10 var_10          = dword ptr -10h
___:10001A10 var_C           = dword ptr -0Ch
___:10001A10 var_4           = dword ptr -4
___:10001A10 arg_0           = dword ptr  4
___:10001A10
___:10001A10                 push    0FFFFFFFFh
___:10001A12                 push    15B4ABBh
___:10001A17                 mov     eax, large fs:0
___:10001A1D                 push    eax
___:10001A1E                 mov     large fs:0, esp
___:10001A25                 push    ecx
___:10001A26                 push    ebx
___:10001A27                 push    ebp
___:10001A28                 push    esi
___:10001A29                 mov     esi, ecx
___:10001A2B                 push    edi
___:10001A2C                 lea     edi, [esi+0Ch]
___:10001A2F                 mov     ecx, edi
___:10001A31                 mov     [esp+20h+var_10], esi
___:10001A35                 mov     dword ptr [esi], 15B50B8h
___:10001A3B                 call    near ptr ??0SendBuffer@@QAE@XZ ; SendBuffer::SendBuffer(void)
___:10001A40                 lea     ebx, [esi+8020h]
___:10001A46                 mov     ecx, ebx
___:10001A48                 mov     [esp+20h+var_4], 0
___:10001A50                 call    ??0CGenericMessage@@QAE@XZ ; CGenericMessage::CGenericMessage(void)
___:10001A55                 lea     ebp, [esi+0C038h]
___:10001A5B                 mov     ecx, ebp
___:10001A5D                 call    near ptr dword_10003C20
___:10001A62                 lea     ecx, [esi+0C03Ch]
___:10001A68                 call    near ptr dword_10003C20
___:10001A6D                 mov     eax, [esp+20h+arg_0]
___:10001A71                 mov     ecx, edi
___:10001A73                 mov     [esi+8], eax
___:10001A76                 mov     byte ptr [esi+4], 1
___:10001A7A                 call    near ptr ?InitBuffer@SendBuffer@@QAEXXZ ; SendBuffer::InitBuffer(void)
___:10001A7F                 mov     ecx, ebx
___:10001A81                 call    near ptr ?InitBuffer@RecvBuffer@@QAEXXZ ; RecvBuffer::InitBuffer(void)
___:10001A86                 mov     ecx, ebp
___:10001A88                 call    near ptr dword_10003BC0
___:10001A8D                 lea     ecx, [esi+0C03Ch]
___:10001A93                 call    near ptr dword_10003BC0
___:10001A98                 mov     ecx, [esp+20h+var_C]
___:10001A9C                 xor     eax, eax
___:10001A9E                 mov     [esi+0C040h], eax
___:10001AA4                 mov     [esi+0C044h], eax
___:10001AAA                 pop     edi
___:10001AAB                 mov     eax, esi
___:10001AAD                 pop     esi
___:10001AAE                 pop     ebp
___:10001AAF                 pop     ebx
___:10001AB0                 mov     large fs:0, ecx
___:10001AB7                 add     esp, 10h
___:10001ABA                 retn    4
___:10001ABA ??0CClientObject@@QAE@I@Z endp
___:10001ABA
___:10001ABA ; ---------------------------------------------------------------------------
