spgame
======
Repo for documenting client functions in a defunct MORPG "Survival Project".

Introduction
-----
This repo is created by <a href="https://github.com/umehkg/spgame/blob/master/comments/ABOUTME.md">HKG 巫毒兔子</a>, an hobbyist enthusiast in reverse engineering. This repo is maintained by our contributors' support. The project attempts to construct an SPGAME server by reversing the mechanisms in the game client... from scratch!

<br />
This repo contains the products and work-in-process for <u>recovered functions</u> in the game client:<br />
<b>./asm</b>         for raw assembly<br />
<b>./src</b>         for recovered C++-style functions<br />
```
fork me
```
<br />
<hr>
Currently working on:<br />
<b>
sp.exe+2FAC00
</b>
Contact
-----
raidcallTW group: 27105202<br />
<a href="http://forum6.hkgolden.com/ProfilePage.aspx?userid=195369">(Show Blocked User - 巫毒兔子)</a><br />
Documented functions
-----
**iosocketdll.dll**<br />
+1020 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CClientObject/IsValid.cpp">CClientObject::IsValid</a><br />
+1FF0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CClientTCPSocket/ReceiveLoop.cpp">
CClientTCPSocket::ReceiveLoop
</a><br />
+23C0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CGenericMessage/MakeDigest.cpp">CGenericMessage::MakeDigest</a><br />
+2420 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CGenericMessage/EncryptMsg.cpp">CGenericMessage::EncryptMsg</a><br />
+2440 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CGenericMessage/CheckCheckSum.cpp">CGenericMessage::CheckCheckSum</a><br />
+2C10 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CClientTCPSocket/CheckValidMsg.cpp">CClientTCPSocket::CheckValidMsg</a>70% done
<br>
+2D50 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CClientTCPSocket/SendLoop.cpp">
CServerTCPSocket::SendLoop
</a><br />
+3AD0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/SendBuffer/SendBuffer.cpp">SendBuffer::SendBuffer</a><br />
+3B60 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/3B60_EncryptBody.cpp">EncryptBody</a><br />
+3B90 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/3B90_DecryptBody.cpp">DecryptBody</a><br />
+3BC0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/3BC0_CGenericMessage_InitSocketSub.cpp">CGenericMessage::InitSocketSub</a> <br />
+3C30 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/3C30_DigestMsg1.cpp">DigestMsg1 </a> aka MD5::init<br />
+3C60 MD5::transform (verification needed)<br />
+38F0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/RecvBuffer/UpdateRecvData.cpp">
RecvBuffer::UpdateRecvData</a><br />
+44E0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/44E0_DigestMsg2.cpp">DigestMsg2</a> 30% done
<br />
+464A ws2_32.setsockopt<br />
+4656 ws2_32.WSAGetLastError<br />
+465C ws2_32.connect<br />
+4662 ws2_32.WSAAsyncSelect<br />
+4668 ws2_32.inet_addr<br />
+466E ws2_32.ntohs<br />
+4674 ws2_32.ntohl<br />
+467A ws2_32.socket<br />
+4686 ws2_32.recv<br />
+468C ws2_32.WSAStartup<br />
+46BC ws2_32.sento<br />
<br />
Exact (non-call):<br />
+465D ws2_32.connect<br />
+467B ws2_32.socket<br />
+4681 ws2_32.send<br />
+4699 ws2_32.listen<br />
+469F ws2_32.bind<br />
<br />
