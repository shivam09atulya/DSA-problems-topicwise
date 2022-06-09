#include<stdio.h>
#include<string.h>

void display(int **a)
{
    int i =0;
    for(i=0;a[i]!='\0';i++)
    {
        printf(" %d ",a[i]);
    }
}
int main()
{
    int a[][2]={1,2,3,4,5,6,7,8};
    int i;
    for(i=0;i<sizeof(a)/sizeof(int)*sizeof(int);i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    display(a);
    return 0;

}