Navigation<br />
<a href="https://github.com/umehkg/spgame/blob/master/comments/recvPacket.md#type-i--login-server-tcp">1. Login Server (TCP)</a> <br />
<a href="https://github.com/umehkg/spgame/blob/master/comments/recvPacket.md#type-ii-game-server-udp">2. Game Server (UDP)<br />
<a href="https://github.com/umehkg/spgame/blob/master/comments/recvPacket.md#type-iii-lobby-server-tcp"> 3. Lobby Server (TCP) </a><br />

NOTE: CClientTCPSocket::GetSocket should be CGenericMesssage::GetType, due to problems in IAT.
CGenericMesssage::GetType(void) returns unsigned long packetType
```C++
unsigned long packetType = *(LPDWORD)(packet+0x4);
```
Type I : Login Server (TCP)
------
packetType = 0x2807 / 0x29XX **TCP Packet** <br />
```asm
;iosocketdll.dll
;CClientTCPSocket::ReceiveProcess
___:015B2327                 mov     eax, [esi]
___:015B2329                 push    edi
___:015B232A                 mov     ecx, esi
___:015B232C                 call    dword ptr [eax+14h]

; ecx: 0x007F3C38
; eax: 0x0076D6C0
; [eax+14h]: 0x006FAC00 (Type I)
; edi: TCP packet payload received by client

; N.B. [eax+30h]: 0x006F77D0 (Type III)
```
Recv Ref: CClientTCPSocket::ReceiveProcess-> call <a href="https://github.com/umehkg/spgame/blob/master/src/sp/2FAC00_RecvPacket.cpp">sub_6FAC00</a> <br />
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
- 0x2925 sub_6FAAD0 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x2925.txt">$</a> Kick Client? (bring to login screen). Displays korean msg. (size 0x14) > jmp sub_4035D0

Type II: Game Server (UDP)
--------
packetType = 0x1100~0x1140　**UDP Packet** Why do they share the same function? It's a mystery.<br />
Ref: sub_70A4D0<br />
```asm
.text:0070A527                 call    ?ReceiveLoop@CUDPSocket@@QAE_NIAAVCGenericRcvMsg@@@Z ; CUDPSocket::ReceiveLoop(uint,CGenericRcvMsg &)
.text:0070A52C                 test    al, al
.text:0070A52E                 jz      loc_70A8E3
.text:0070A534                 mov     [ebp+var_4031], 1
.text:0070A53B                 xor     ebx, ebx
.text:0070A53D                 mov     [ebp+var_4], ebx
.text:0070A540                 lea     ecx, [ebp+var_4030]
.text:0070A546                 nop
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

Type III: Lobby Server (TCP)
-----------
packetType: 0x4302~0x4490<br />

Init Ref: sub_484990 <br />
```asm
.text:004849AD                 mov     eax, [esi+2FE4h]
.text:004849B3                 mov     ecx, [esi+2FE8h]
.text:004849B9                 lea     eax, [eax+eax*4]
.text:004849BC                 lea     eax, [ecx+eax*8]
.text:004849BF                 mov     edx, [esi+eax*4+0AC0h]
.text:004849C6                 mov     ecx, ds:wParam
.text:004849CC                 push    edx
.text:004849CD                 shl     eax, 4
.text:004849D0                 lea     eax, [eax+esi+0B4h]
.text:004849D7                 push    eax
.text:004849D8                 push    40Bh
.text:004849DD                 push    ecx
.text:004849DE                 mov     ecx, offset off_800518
.text:004849E3                 nop
.text:004849E4                 call    ?InitClientTCP@CClientTCPSocket@@QAE_NPAUHWND__@@IPADH@Z ; CClientTCPSocket::InitClientTCP(HWND pWnd*,uint wMsg,char * ip_addr, int port)
```
```C++
  long channelIdx = *(long *)(0x7F0BD8+0x2FE4) * 40 + *(long *)(0x7F0BD8+0x2FE8);
  char ip_addr[15];
  long port = *(long *)(0x7F0BD8+0xAC0+channelIdx*4);
  
  memcpy(&ip_addr[0], (char *)(0x7F0BD8+0xB4+channelIdx*16), 16);
  (CClientTCPSocket *)(LPVOID)0x800518->InitClientTCP((HWND *)(LPVOID)0x800518, 1035, ip_addr, port);
```
Recv Ref: ds:800518->+0x14=ds:76D6F0->**sub_6F77D0**<br />
Note: The caller of this function is CClientTCPSocket::ReceiveProcess<br />
```asm
.text:006F7808                 call    ?GetSocket@CClientTCPSocket@@QAEIXZ ; CClientTCPSocket::GetSocket(void)
.text:006F780D                 add     eax, 0FFFFBCFEh
.text:006F7812                 cmp     eax, 18Eh       ; switch 399 cases
```
Incomplete listing of Type III: **TCP Packet** <br />
- 0x4302: sub_6DDE30 <a href="https://github.com/umehkg/spgame/blob/master/comments/packetType/0x4302.txt">+</a> MyInfo
- 0x4303: sub_6D8B50
- 0x4304: sub_6DC770 LobbyInfo (rooms)
- 0x4308: case 6: sub_6DEAA0 "CreateRoom - End"
- 0x4312: case 16: sub_6DCC50 ;<"Over Room Array Number", "CGameRoomInfoResultMsg - Result Type:%d">
- 0x4314: case 18: sub_6DEC00 "JoinRoom - End"
- case 62: sub_6ED420 GameState == 4 ? confirm, playerName
