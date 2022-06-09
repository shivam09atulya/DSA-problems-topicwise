#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *s;
};
void push(struct stack *s1,int data){
    if(s1->top==s1->size-1)
    {
        printf("Stack Overflow!!!");
        return;
    }
    else{
        
        s1->top++;
        printf("Push(): %d\n",data);
        s1->s[s1->top]=data;
    }
}

int pop(struct stack *s1)
{
    if(s1->top==-1)
    {
        printf("Stack Underflow!!!");
        return -1;
    }
    else{

        int m=s1->s[s1->top];
        s1->top--;
        printf("Pop(): %d\n",m);
        return m;
    }
}

void display(struct stack *s1)
{
    for(int i=0;i<s1->top;i++)
    {
        printf(" %d ",s1->s[i]);
    }
    printf("\n");
}

void main()
{
    struct stack s1;
    s1.top=-1;
    printf("Enter the size of stack = ");
    scanf("%d",&s1.size);
    s1.s=(int *)malloc(s1.size*sizeof(int));
    printf("Enter the data and press -1 to stop ");
    int data=0;
    do
    {
        scanf("%d",&data);
        push(&s1,data);
    } while (data!=-1);
    display(&s1);
    pop(&s1);
    
}