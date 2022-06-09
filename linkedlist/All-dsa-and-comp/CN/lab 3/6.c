#include <stdio.h>
typedef unsigned char BYTE;
int main()
{
    unsigned int value;
    printf("Enter the value:\n");
    scanf("%d", &value);
    BYTE a, b, c, d;

    a = (value & 0xFF);
    b = ((value >> 8) & 0xFF);
    c = ((value >> 16) & 0xFF);
    d = ((value >> 24) & 0xFF);

    printf("a= %02x\n", a);
    printf("b= %02x\n", b);
    printf("c= %02x\n", c);
    printf("d= %02x\n", d);
    return 0;
}