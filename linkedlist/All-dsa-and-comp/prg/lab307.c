#include<stdio.h>
#include<stdlib.h>
void main()
{   int i;
    struct term{
        int coeff;
        int exp;
    };
    struct poly{
        int n;
        struct term *t;
    };
    struct poly p;
    printf("No of non zero terms = ");
    scanf("%d",&p.n);
    p.t=(int*)malloc(sizeof(p.n));
    printf("Enter polynomial terms = \n");
    for (i=0;i<p.n;i++)
    {
        printf("Term no. = %d \n",i+1);
        scanf("%d%d",&p.t[i].coeff,&p.t[i].exp);
    }
    
    for(i=0;i<n;i++)
    {
        printf(" + %d + ","");
    }
    }