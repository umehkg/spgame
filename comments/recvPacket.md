CClientTCPSocket::GetSocket(void) returns unsigned long packetType
```C++
unsigned long packetType = *(LPDWORD)(packet+0x4);
```
Type I: 0x2XXX
https://github.com/umehkg/spgame/blob/master/src/sp/2FAC00_RecvPacket.cpp

Type II: 0x1100~0x1140
```asm
.text:0070A547                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:0070A54C                 add     eax, 0FFFFEF00h
.text:0070A551                 cmp     eax, 40h        ; switch 65 cases
```

Type III: 0x4302~0x4490
```asm
.text:006F7808                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:006F780D                 add     eax, 0FFFFBCFEh
.text:006F7812                 cmp     eax, 18Eh       ; switch 399 cases
```
