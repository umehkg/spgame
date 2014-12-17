Comments
=====
17 Dec 2014
-----
- Almost 100% sure iosocketdll.dll+3C60 is void MD5::transform(const uint1 block	blocksize). However, +3C60 returns the calculated md5 hash in eax. The result is believed to have a 0x10 size. The result is subsequently broken down into 4 dwords and then MakeDigest returns with the value of xor of all the said dwords [verification needed].

- MakeDigest is actually an MD5 implementation
