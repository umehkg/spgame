How to use RecvPacket class:

```C++
CRecvPacket pRecvPacket = new CRecvPacket(recvBuff, dwBytes);
long pRecvType = pRecvPacket->GetType();
size_t pRecvSize = pRecvPacket->GetSize();
long pRecv_dword_14 = *(long *)(pRecvPacket->GetPPtr()+0x14);
```
