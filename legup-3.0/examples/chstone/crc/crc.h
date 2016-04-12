#ifndef _CRC_H_
#define _CRC_H_

#include <stdio.h>


typedef unsigned char uchar;
#define LOBYTE(x) ((uchar)((x) & 0xFF))
#define HIBYTE(x) ((uchar)((x) >> 8))


unsigned short icrc1(unsigned short crc, unsigned char onech);

int icrc(unsigned char lin[268],int x, unsigned short buff[2],int y);

#endif
