void EncryptBody(char *msgBody, int msgBodyLen)
{
	if (msgBodyLen <= 0)
		return;
	for (int i = 0; i < msgBodyLen; i++)
	{
		unsigned char c = *(msgBody+i);
		c = ~c;
		*(msgBody+i) = (c >> 5)|(c << 3);
	}
}
