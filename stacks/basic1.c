#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int front;
    int *s;
};
void push(struct stack *s1,int data)
{
    if (s1->front==s1->size-1)
    {
        printf("\nStack Overflow");
        return;
    }
    s1->front++;
    printf("\n%d pushed\n",data);
    s1->s[s1->front]=data;
}
void display(struct stack *s1)
{
  for(int i=0;i<=s1->front;i++)
  {
      printf(" %d ",s1->s[i]);

  }
}
int pop(struct stack *s1)
{
    if(s1->front==-1)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else{
        int m = s1->s[s1->front];
    s1->front--;
    printf("\n%d poped\n",m);
    return m;

    }


}
int peek(struct stack *s1,int p)
{
    if(p>s1->front)
    {
        printf("\nKnowing no exceeds elements in stack\n");
        return -1;
    }
    else{
        return s1->front-p+2;
    }

}
void main()
{
    struct stack s1;
    printf("\nEnter the size of stack = ");
    scanf("%d",&s1.size);
    s1.front=-1;
    s1.s=(int *)malloc(s1.size*sizeof(int));
    int data=0;
    // push(&s1,1);
    // push(&s1,2);
    // push(&s1,3);
    // push(&s1,4);
    // push(&s1,4);
    // push(&s1,4);
    // display(&s1);
    while(data!=-1)
    {
        printf("Enter data of the stack and -1 to exit = ");
        scanf("%d",&data);
        push(&s1,data);
    }
    display(&s1);
    printf("\n peeked = %d\n",peek(&s1,4));
    printf("\n front = %d",s1.front);
}