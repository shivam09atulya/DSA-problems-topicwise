#include "stdio.h"
void main()
{
    unsigned int x = 0x76513210;
    char *c = (char *)&x;
    printf("*c is :: 0x%x\n", *c);
    if (*c )
    {
        printf("Underlying architecture is little endian.\n");
    }
    else
    {
        printf("Underlying architecture is big endian.\n");
    }
}