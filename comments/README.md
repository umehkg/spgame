Comments
=====
14 Jan 2015
-----
- Heap Errors fixed by correcting the bounds
- call sub_401A10 is display Announcement Wnd
- CreateFunction sub_626C60 <"ioXMLDocument::CreateInstance - FAILED(%x)", "Msxml2.DOMDocument.4.0">
- ^ call [edx+4] sub_62C830 ; <"ioWndManager::ProcessElement - Unknown Button Class %s", "CLASS_NAME", "BUTTON", "TABCONTROL", "TEXTLIST", "TABLISTWINDOW", "T>

8 Jan 2015
-----
- Off-by-one errors... char array[x] x represents memory size (inclusive of null-termination byte) already

29 Dec 2014
-----
- Future tests must be based on Lobby Server (Type III).

27 Dec 2014
-----
- Found formula for calculating exp needed for each level

26 Dec 2014
-----
- No success in Type III so far. Finding the reason...
- Confirm Type III is Lobby Server TCP. It inits after entering a channel.

25 Dec 2014
-----
- Local workaround of UDP is possible.
- Enter channel packet confirmed to be type 0x1101

24 Dec 2014
-----
- Channel Info packet confirmed
- Fixed issues for cannot select channelType (MyInfo->0xD98)
- Connect to channel issues: 1) where is it connecting? 2) what is the server response expected?

23 Dec 2014
-----
- Finally found base pointer for channel info. Packet type is found (I guess). Test needed.
- Base pointer for room info is found! (mapType, mode etc)

22 Dec 2014
-----
- Change character packet is OK
- username protection by CryptInfo for every char in username (99% sure)
- Type III should be 99% UDP. further tests needed. case 0 is important
- Handling login credentials (and responses) are by TCP(type I)
- 0x2807(Type I) **overrides** Type II Login
- partial success in creating login response with basic playerInfo. relies on -1 subcase
- define xor neg algoithm as CryptInfo
- username protection has 3rd protection. first char(unencrypted) is stored in "Default"(0x76D83F)

21 Dec 2014
-----
- The search for recv packets handling continues...

20 Dec 2014
-----
- client class MyInfo has a static base pointer.
- Channel chat code will be posted on issues.
- Username has 3 protection functions, 2 of them believed to be traffic light construction
- ^ Username is stored in 2 positions, one in plaintext one in CryptUserInfo (guessed), addresses found, implement failed
- packetType is actually socket ID? (unverified)
- LoadChannel Resource is *after* Enter Channel
- Found login OK response packet

19 Dec 2014
-----
- Code has protection xor neg
- Card has protection xor neg
- Cash has no protection
- DisplayCode/Total has no protection  (string)

18 Dec 2014
-----
- Found a way to enter card shop (alternative way to set GameState = 5 without crashing). Ref:sp.exe+893C4. esi @instruction = ecx @subroutine EP (this pointer). Subroutine sp.exe+89310 is member of *CUnknown* with const base addr = 0x816860 (Ref: sp.exe+5233)
- 0x821860 byte

- iosocket.dll+3C60 is confirmed to be MD5::transform. The subroutine calculates the md5 hash of the entire packet payload (with its first dword as packet size) and returns the hash value with eax.

- This is no IP restriction in gng.ini whatsoever (127.0.0.1 unconfirmed). Test Environment: Windows XP SP3 Pro VM running in Windows 8.1 Pro, NAT Network Adapter, IP default

17 Dec 2014
-----
- MakeDigest +23CE push eax ;eax is lpBuffer for MD5::DWORD state[4]

- Almost 100% sure iosocketdll.dll+3C60 is void MD5::transform(const uint1 block	blocksize). However, +3C60 returns the calculated md5 hash in eax. The result is believed to have a 0x10 size. The result is subsequently broken down into 4 dwords and then MakeDigest returns with the value of xor of all the said dwords [verification needed].

- MakeDigest is actually an MD5 implementation
