Comments
=====
18 Dec 2014
-----
- iosocket.dll+3C60 is confirmed to be MD5::transform. The subroutine calculates the md5 hash of the entire packet payload (with its first dword as packet size) and returns the hash value with eax.

- This is no IP restriction in gng.ini whatsoever (127.0.0.1 unconfirmed). Test Environment: Windows XP SP3 Pro VM running in Windows 8.1 Pro, NAT Network Adapter, IP default

17 Dec 2014
-----
- MakeDigest +23CE push eax ;eax is lpBuffer for MD5::DWORD state[4]

- Almost 100% sure iosocketdll.dll+3C60 is void MD5::transform(const uint1 block	blocksize). However, +3C60 returns the calculated md5 hash in eax. The result is believed to have a 0x10 size. The result is subsequently broken down into 4 dwords and then MakeDigest returns with the value of xor of all the said dwords [verification needed].

- MakeDigest is actually an MD5 implementation
