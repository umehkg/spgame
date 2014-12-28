/*
Version 20141225a

*/
typedef struct _LOGIN_INFO
{
        char id[12];
        char pw[12];
} LOGIN_INFO, *PLOGIN_INFO;
class CPacket
{
private: //encapsulation
        long m_len;
        unsigned int m_type;
        unsigned char *m_payload;
        bool m_isEncrypted;
        PLOGIN_INFO m_pLoginInfo;
        void getLoginInfo();
		unsigned long makeDigest();
public:
		CPacket(unsigned long, const void *, size_t); //use for server send
        CPacket(const void *, size_t, bool); //use for server recv
        ~CPacket();
		size_t GetSize();
		unsigned long GetType();
        void Encrypt();
        void Decrypt();
        void Output(char *, int); //output payload to buffer passed as argument
		void Output(unsigned char *, int);//since you really like unsigned :S
        void OutputLoginInfo(PLOGIN_INFO);
};
