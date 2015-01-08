/*
Version 20150108

*/
#pragma once
class CPacket
{
protected: //encapsulation
        long m_len;
        unsigned int m_type;
		size_t m_mlen; //dynamic memory size of m_payload
        unsigned char *m_payload;
        bool m_isEncrypted;
public:
		//default constructor
		CPacket();
		/* use for server send */
		CPacket(unsigned long packetType);
		CPacket(unsigned long packetType, size_t packetSize);
		CPacket(unsigned long packetType, const void *data, size_t dataSize);
		/* use for server send/recv */
        CPacket(const void *payload, size_t packetSize, bool isEncrypted);
		//
        ~CPacket();
		//
		size_t GetSize();
		unsigned long GetType();
		void AppendData(void *dataBuffer, size_t dataSize);
		void UpdateDataAt(unsigned long packetOffset, void *dataBuffer, size_t dataSize);
        void Encrypt();
        void Decrypt();
		unsigned long MakeDigest();
		bool CheckPacket();
        void Output(char *outBuffer); //output payload to buffer passed as argument
		void Output(unsigned char * outBuffer);//since you really like unsigned :S
};
