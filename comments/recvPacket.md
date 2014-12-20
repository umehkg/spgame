CClientTCPSocket::GetSocket(void) returns unsigned long packetType
```C++
unsigned long packetType = *(LPDWORD)(packet+0x4);
```
Type I: 0x2XXX
https://github.com/umehkg/spgame/blob/master/src/sp/2FAC00_RecvPacket.cpp
- 0x2912 sub_6F90B0

Type II: 0x1100~0x1140　**UDP Packet** Why do they share the same function? It's a mystery.<br />
Ref: sub_70A4D0<br />
```asm
.text:0070A547                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:0070A54C                 add     eax, 0FFFFEF00h
.text:0070A551                 cmp     eax, 40h        ; switch 65 cases
```
- case 0:
- case 1:
- case 2:
- case 3:
- case 4:
- case 5:
- case 6:
- case 7:
- case 8:
- case 9:
- case 16:
- case 18:
- case 19:
- case 20:
- case 21:
- case 24:
- case 25:
- case 32: sub_6FFEB0 GameState == 4 ? 
- **case 33**: sub_700430 Login response
- case 35: sub_6FB590 MyInfo->0x2E01~0x2E08, checks MyInfo->0xCC0 == 0x244 ?
- case 36: sub_6FF5F0 GameState == 3 || 4 ?
- case 37: sub_7068C0 "CUDPQuestNPCCollisionMsg Rcv Start"
- case 38: sub_701D00 GameState == 4 ? "CUDPNpcControlMsg Rcv Start"
- case 39: sub_701E80 GameState == 4 ?
- case 40: sub_6FB050 some game message in korean
- case 41: sub_702090 GameState == 4 ?
- case 48: sub_702230 GameState == 4 ?
- case 49: sub_70A1B0 GameState == 4 ?
- case 50: sub_6FB520 ds:7EF97C ???
- case 51:
- case 52:
- case 53:
- case 54:
- case 55:
- case 56:
- case 57:
- case 64: sub_706150 GameState == 4 ?

Type III: 0x4302~0x4490
```asm
.text:006F7808                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:006F780D                 add     eax, 0FFFFBCFEh
.text:006F7812                 cmp     eax, 18Eh       ; switch 399 cases
```
- case 62: sub_6ED420 GameState == 4 ? confirm, playerName
