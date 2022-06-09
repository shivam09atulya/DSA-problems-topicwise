#include <stdio.h>
int main()
{
    int a, *p1;
    int b, *p2;
    int c, *p3;
    a = 2;
    b = 3;
    c = 4;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf(" %d %d\n %d %d\n %d %d", a, p1, b, p2, c, p3);
}