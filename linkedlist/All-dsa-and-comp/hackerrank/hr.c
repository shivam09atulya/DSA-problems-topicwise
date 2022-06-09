#include<stdio.h>
#include<stdlib.h>
struct time{
    int hr;
    int mt;
    int snd;
    char merd[2];
};
void main()
{struct time t;
printf("\nEnter the time = hh::mm::ss::am/pm = \n");
scanf("%d",&t.hr);
scanf("%d",&t.mt);
scanf("%d",&t.snd);
scanf(" %c",&t.merd);
if(t.merd=='a')
t.merd='am';
else if(t.merd=='p')
t.merd='pm';
printf("\nYour time is = %d::%d::%d::%d\n",t.hr,t.mt,t.snd,t.merd);

    
}