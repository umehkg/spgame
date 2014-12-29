/*
Version 20141229

*/
class CPacket
{
private: //encapsulation
        long m_len;
        unsigned int m_type;
        unsigned char *m_payload;
        bool m_isEncrypted;
        void getLoginInfo();
		unsigned long makeDigest();
public:
		CPacket(unsigned long packetType, const void *data, size_t dataSize); //use for server send
        CPacket(const void *payload, size_t dataSize, bool isEncrypted); //use for server recv
        ~CPacket();
		size_t GetSize();
		unsigned long GetType();
		void AppendData(void *dataBuffer, size_t dataSize);
        void Encrypt();
        void Decrypt();
		bool CheckPacket();
        void Output(char *outBuffer); //output payload to buffer passed as argument
		void Output(unsigned char * outBuffer);//since you really like unsigned :S
};
