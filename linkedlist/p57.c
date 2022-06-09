#include "display.h"

void sortarray(int *a,int count)
{
    int i,j,temp=0;
    for(i=0;i<count;i++)
    {
        for(j=i;j<count;j++)
        {
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }

}


void linksort(struct node *h)
{
    int a[100],i,count=0;
    for(i=0;h!=NULL;i++)
    {
        a[i]=h->data;
        h=h->next;
        count++;
    }

   /* for(i=0;i<count;i++)
    {
        printf("\n %d ",a[i]);
    }
    */
    sortarray(a,count);
    /*
    for (i = 0; i < count; i++)
    {
        printf("\n %d ", a[i]);
    }
    */
    h=head;
    i=0;
    while(h)
    {   
        h->data=a[i];
        h=h->next;i++;
    }
}
void main()
{
    insert(2);
    insert(3);
    insert(6);
    insert(1);
    insert(5);
    insert(7);
    insert(3);
    display();
    linksort(head);
    printf("\n");
    display();
    display();
    display();
}