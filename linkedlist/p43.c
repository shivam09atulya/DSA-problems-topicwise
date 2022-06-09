#include "display.h"
//here to delete the given node make the single linked list's last node next point to the head pointer and take another pointer which will just traverse just before the given pointer now just delete it                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

void delete(struct node *del)
{
    struct node *new=del->next;
    del->next=new->next;
    free(new);

}


void deletesame(struct node* d)
{
    struct node *h=head,*t=head;
    while(t->next)
    t=t->next;
    t->next=h;

    while(h->next!=d)
    h=h->next;

    delete(h);
    t->next=NULL;

}

void main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    deletesame(head->next->next);
    display(head);
}