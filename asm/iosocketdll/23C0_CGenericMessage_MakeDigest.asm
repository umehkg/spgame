___:100023C0 ; Exported entry  93. ?MakeDigest@CGenericMessage@@IAEKXZ
___:100023C0
___:100023C0 ; =============== S U B R O U T I N E =======================================
___:100023C0
___:100023C0
___:100023C0 ; protected: unsigned long __thiscall CGenericMessage::MakeDigest(void)
___:100023C0                 public ?MakeDigest@CGenericMessage@@IAEKXZ
___:100023C0 ?MakeDigest@CGenericMessage@@IAEKXZ proc near
___:100023C0                                         ; CODE XREF: CGenericMessage::EncryptMsg(void)+3p
___:100023C0                                         ; CGenericMessage::CheckCheckSum(void)+17p
___:100023C0                                         ; DATA XREF: ...
___:100023C0
___:100023C0 var_68          = dword ptr -68h
___:100023C0 var_64          = dword ptr -64h
___:100023C0 var_60          = dword ptr -60h
___:100023C0 var_5C          = dword ptr -5Ch
___:100023C0 var_58          = byte ptr -58h
___:100023C0
___:100023C0                 sub     esp, 68h
___:100023C3                 push    esi
___:100023C4                 mov     esi, ecx
___:100023C6                 push    edi
___:100023C7                 mov     edi, [esi+0Ch]
___:100023CA                 lea     eax, [esp+70h+var_58]
___:100023CE                 push    eax
___:100023CF                 mov     dword ptr [esi+0Ch], 0
___:100023D6                 call    near ptr dword_10003C30
___:100023DB                 mov     ecx, [esi]
___:100023DD                 push    ecx
___:100023DE                 lea     edx, [esp+78h+var_58]
___:100023E2                 push    esi
___:100023E3                 push    edx
___:100023E4                 call    near ptr dword_100044E0
___:100023E9                 lea     eax, [esp+80h+var_58]
___:100023ED                 push    eax
___:100023EE                 lea     ecx, [esp+84h+var_68]
___:100023F2                 push    ecx
___:100023F3                 call    near ptr dword_100045B0
___:100023F8                 mov     eax, [esp+88h+var_5C]
___:100023FC                 mov     edx, [esp+88h+var_64]
___:10002400                 mov     ecx, [esp+88h+var_68]
___:10002404                 mov     [esi+0Ch], edi
___:10002407                 mov     esi, [esp+88h+var_60]
___:1000240B                 add     esp, 18h
___:1000240E                 xor     eax, esi
___:10002410                 xor     eax, edx
___:10002412                 pop     edi
___:10002413                 xor     eax, ecx
___:10002415                 pop     esi
___:10002416                 add     esp, 68h
___:10002419                 retn
___:10002419 ?MakeDigest@CGenericMessage@@IAEKXZ endp
___:10002419
___:10002419 ; ---------------------------------------------------------------------------
