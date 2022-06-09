#include<stdio.h>
#include<stdlib.h>

struct information 
{
    char name[50];
    int DOB;
    float salary;

}s[10];
int main()
{
    int i,n,gross_salary,da,ta;
    printf("enter information:\n");
    printf("enter no. of employee:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter employee Id : \n");
        scanf("%s",s[i].name);
        printf("enter DOB :\n");
        scanf("%d",&s[i].DOB);
        printf("ent5er salary :\n");
        scanf("%f",&s[i].salary);
    }
    for(i=1;i<=n;i++)
    {
        printf("displaying information : \n");
        scanf("%f",);
    }
}