___:10002440 ; Exported entry  37. ?CheckCheckSum@CGenericMessage@@QAE_NXZ
___:10002440
___:10002440 ; =============== S U B R O U T I N E =======================================
___:10002440
___:10002440
___:10002440 ; public: bool __thiscall CGenericMessage::CheckCheckSum(void)
___:10002440                 public ?CheckCheckSum@CGenericMessage@@QAE_NXZ
___:10002440 ?CheckCheckSum@CGenericMessage@@QAE_NXZ proc near
___:10002440                                         ; CODE XREF: CClientTCPSocket::CheckValidMsg(CGenericRcvMsg *)+2Cp
___:10002440                                         ; CServerTCPSocket::CheckValidMsg(CClientObject *,CGenericRcvMsg *)+2Cp
___:10002440                                         ; DATA XREF: ...
___:10002440                 push    esi
___:10002441                 mov     esi, ecx
___:10002443                 mov     eax, [esi]
___:10002445                 sub     eax, 4
___:10002448                 push    eax
___:10002449                 lea     ecx, [esi+4]
___:1000244C                 push    ecx
___:1000244D                 call    near ptr dword_10003B90
___:10002452                 add     esp, 8
___:10002455                 mov     ecx, esi
___:10002457                 call    ?MakeDigest@CGenericMessage@@IAEKXZ ; CGenericMessage::MakeDigest(void)
___:1000245C                 cmp     eax, [esi+0Ch]
___:1000245F                 setnz   al
___:10002462                 pop     esi
___:10002463                 retn
___:10002463 ?CheckCheckSum@CGenericMessage@@QAE_NXZ endp
___:10002463
___:10002463 ; ---------------------------------------------------------------------------
