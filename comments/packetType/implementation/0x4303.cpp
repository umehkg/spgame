			unsigned char myData1[0x3C];
			char *myData = (char *)calloc(0x3C-0x14, 0x1);
			char name[16] = "alanlei";

			memcpy(myData+0x14-0x14, name, strlen(name)+1);//player username
			memcpy(myData+0x24-0x14, new long(10), 4);//player level:0~32
			memcpy(myData+0x28-0x14, new long(2), 4);//list player order
			memcpy(myData+0x2C-0x14, new long(0), 4);//unknown
			memcpy(myData+0x30-0x14, new long(1), 4);//gender:0(F),1(M)
			memcpy(myData+0x31-0x14, new char(2), 1);//must be 2
			memcpy(myData+0x34-0x14, new long(0), 4);//unknown
			memcpy(myData+0x38-0x14, new long(3), 4);//m-Level
			
			CPacket *myPacket = new CPacket(0x4303, myData, 0x3C-0x14);
			free(myData);
			myPacket->Encrypt();
			myPacket->Output( (char*)myData1, 0x3C );
