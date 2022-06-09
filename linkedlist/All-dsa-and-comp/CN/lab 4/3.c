#include <stdio.h>

int main()
{
    unsigned int little = 0x1234ABCD, big = 0;
    unsigned char tmp = 0, l;

    printf(" Little endian little=%x\n", little);

    for (l = 0; l < 4; l++)
    {
        tmp = 0;
        tmp = little | tmp;
        big = tmp | (big << 8);
        little = little >> 8;
    }
    printf(" Big endian big=%x\n", big);
}