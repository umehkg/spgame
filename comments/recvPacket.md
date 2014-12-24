CClientTCPSocket::GetSocket(void) returns unsigned long packetType
```C++
unsigned long packetType = *(LPDWORD)(packet+0x4);
```
Type I: 0x2807 / 0x29XX **TCP Packet** <br />
Ref: sub_6FAC00
https://github.com/umehkg/spgame/blob/master/src/sp/2FAC00_RecvPacket.cpp <br />
Complete listing of Type I functions (10 of them): Confirmed TCP <br />
$: complete, +: working, -: unsolved
- 0x2807 sub_6F9910 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2807.txt">+</a> Login Response
- 0x2908 sub_6F8E80 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2908.txt">+</a> Channel Info (one pkt per channel)
- 0x2912 sub_6F90B0 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2912.txt">$</a> SetActiveCharacter
- 0x2916 sub_6F9FC0 - related with 2 cards. fusion, skillup?
- 0x2918 sub_6F8B50 - easy, sets dword_7F335C 4 dwords
- 0x2919 sub_6F8AF0 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2919.txt">+</a> size 0x18
- 0x2922 sub_6F8BD0 - size 0x2C "Guild Mark Lock..
- 0x2923 sub_6FAAF0 - > call sub_6FA650 card/white card related
- 0x2924 sub_6FA9F0 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2924.txt">+</a> size 0x18 TCPSendLoop(size 0x1C)
- 0x2925 sub_6FAAD0 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2925.txt">$</a> Kick Client? (bring to login screen). Displays korean msg. (size 0x14, no body) > jmp sub_4035D0

Type II: 0x1100~0x1140　**UDP Packet** Why do they share the same function? It's a mystery.<br />
Ref: sub_70A4D0<br />
```asm
.text:0070A547                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:0070A54C                 add     eax, 0FFFFEF00h
.text:0070A551                 cmp     eax, 40h        ; switch 65 cases
```
Complete listing of Type II ( packetType = 0x1100 + dec2hex(caseNumber) ) Confirmed UDP
- 0x1100 case 0: sub_6FAE00
- 0x1101 case 1: sub_6FAFB0 (no body) Enter Channel Response?
- 0x1102 case 2: sub_702F60
- 0x1103 case 3: sub_6FC660
- 0x1104 case 4: sub_6FC820
- 0x1105 case 5: sub_6FCA70
- 0x1106 case 6: sub_6FCD00
- 0x1107 case 7: sub_6FD220
- 0x1108 case 8: sub_6FD5C0
- 0x1109 case 9: sub_7089B0
- 0x1110 case 16: sub_705A00
- 0x1112 case 18: sub_6FECB0
- 0x1113 case 19:
- 0x1114 case 20:
- 0x1115 case 21:
- 0x1118 case 24:
- 0x1119 case 25:
- 0x1120 case 32: sub_6FFEB0 GameState == 4 ? 
- 0x1121 **case 33**: sub_700430 Login response
- 0x1123 case 35: sub_6FB590 MyInfo->0x2E01~0x2E08, checks MyInfo->0xCC0 == 0x244 ?
- 0x1124 case 36: sub_6FF5F0 GameState == 3 || 4 ?
- case 37: sub_7068C0 "CUDPQuestNPCCollisionMsg Rcv Start"
- case 38: sub_701D00 GameState == 4 ? "CUDPNpcControlMsg Rcv Start"
- case 39: sub_701E80 GameState == 4 ?
- case 40: sub_6FB050 some game message in korean
- case 41: sub_702090 GameState == 4 ?
- 0x1130 case 48: sub_702230 GameState == 4 ?
- 0x1131 case 49: sub_70A1B0 GameState == 4 ?
- 0x1132 case 50: sub_6FB520 ds:7EF97C ???
- 0x1133 case 51:
- 0x1134 case 52:
- 0x1135 case 53:
- 0x1136 case 54:
- 0x1137 case 55:
- 0x1138 case 56:
- 0x1139 case 57:
- 0x1140 case 64: sub_706150 GameState == 4 ?

Type III: 0x4302~0x4490
```asm
.text:006F7808                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:006F780D                 add     eax, 0FFFFBCFEh
.text:006F7812                 cmp     eax, 18Eh       ; switch 399 cases
```
Incomplete listing of Type III: <br /> UDP?
- 0x4302: sub_6DDE30 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x4302.txt">+</a>
- case 6: sub_6DEAA0 "CreateRoom - End"
- case 62: sub_6ED420 GameState == 4 ? confirm, playerName
