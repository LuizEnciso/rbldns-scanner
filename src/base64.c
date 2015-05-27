#include <string.h>
#include <stdio.h>
#include <netinet/in.h>
#include "base64.h"

#define __ '\377'
static const char ub64_lookuptab[256] = {
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, /* 0-15 */
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, /* 16-31 */
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, /* 32-47 */
52, 53, 54, 55, 56, 57, 58, 59, 60, 61, __, __, __, __, __, __, /* 48-63 */
__, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, /* 64-79 */
15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 62, __, 63, __, __, /* 80-95 */
__, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, /* 96-111 */
41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, __, __, __, __, __, /* 112-127 */
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __,
__, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __ };
#undef __


const unsigned char base64[] = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789[]"
};

const char *inttobase64(char *buf, unsigned int v, unsigned int count)
{
  buf[count] = '\0';
  while (count > 0)
  {
    buf[--count] = base64[(v & 63)];
    v >>= 6;
  }
  return buf;
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
        size_t ret = strlen(src);

        if (size)
        {
                size_t len = (ret >= size) ? size - 1 : ret;
                memcpy(dest, src, len);
                dest[len] = '\0';
        }
        return ret;
}

unsigned int base64touint(const char *buf)
{
        int bits;
        unsigned int v = 0;
        int count = 6;

        while (--count >= 0 && (bits = ub64_lookuptab[255 & *buf++]) != '\377')
                v = v << 6 | bits;
        return v;
}

void decode_p10_ip(const char *b64, char ipstring[HOSTIPLEN])
{
	struct in_addr ip;
	char buf[4];
	int i, j;
	size_t len;

	ipstring[0] = '\0';
	len = strlen(b64);
	if (len == 6)
	{
		ip.s_addr = ntohl(base64touint(b64));
		if (!inet_ntop(AF_INET, &ip, ipstring, HOSTIPLEN))
			ipstring[0] = '\0';
	}
	else if (len == 24 || (len < 24 && strchr(b64, '_')))
	{
		/* why is this encoded in such a complicated manner? */
		i = 0;
		j = 0;
		while (b64[i] != '\0')
		{
			if (b64[i] == '_')
			{
				i++;
				if (j >= HOSTIPLEN - 2)
					break;
				if (j == 0)
					ipstring[j++] = '0';
				if (b64[i] == '\0')
					ipstring[j++] = ':';
				ipstring[j++] = ':';
			}
			else
			{
				if (j >= HOSTIPLEN - 5)
					break;
				if (j != 0)
					ipstring[j++] = ':';
				strlcpy(buf, b64 + i, 4);
				i += strlen(buf);
				j += sprintf(ipstring + j, "%x", (uint16_t)base64touint(buf));
			}
		}
		ipstring[j] = '\0';
	}
}
