___:10002420 ; Exported entry  51. ?EncryptMsg@CGenericMessage@@QAEXXZ
___:10002420
___:10002420 ; =============== S U B R O U T I N E =======================================
___:10002420
___:10002420
___:10002420 ; public: void __thiscall CGenericMessage::EncryptMsg(void)
___:10002420                 public ?EncryptMsg@CGenericMessage@@QAEXXZ
___:10002420 ?EncryptMsg@CGenericMessage@@QAEXXZ proc near
___:10002420                                         ; CODE XREF: CClientTCPSocket::SendLoop(char *,int)+7Ap
___:10002420                                         ; CServerTCPSocket::SendLoop(CClientObject &,char *,int)+AEp ...
___:10002420                 push    esi
___:10002421                 mov     esi, ecx
___:10002423                 call    ?MakeDigest@CGenericMessage@@IAEKXZ ; CGenericMessage::MakeDigest(void)
___:10002428                 mov     [esi+0Ch], eax
___:1000242B                 mov     eax, [esi]
___:1000242D                 sub     eax, 4
___:10002430                 push    eax
___:10002431                 add     esi, 4
___:10002434                 push    esi
___:10002435                 call    near ptr dword_10003B60
___:1000243A                 add     esp, 8
___:1000243D                 pop     esi
___:1000243E                 retn
___:1000243E ?EncryptMsg@CGenericMessage@@QAEXXZ endp
___:1000243E
___:1000243E ; ---------------------------------------------------------------------------
