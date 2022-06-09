#include "copymain.h"

int palin(struct node *h, struct node *h1)
{
  while (h)
  {
    if (h->data != h1->data)
      return 0;
    h = h->next;
    h1 = h1->next;
  }
  return 1;
}

void main()
{
  insert(1);
  insert(2);



  display(head);
  copy(head);
  head = reverse(head);
  display(head);
  int a = palin(head, start);
  a == 0 ? printf("NOT PALINDROME") : printf("PALINDROME");
}