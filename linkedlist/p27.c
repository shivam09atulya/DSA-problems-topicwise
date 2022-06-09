#include "display.h"

void middle()
{
    struct node *twice=head,*once=head;
    while(twice && twice->next)                    //*first condition should always be less than second condtion because twice->next if is first condition then there might be a segmentation error but no such case will occur if we use it or the next pointer in the second condition      */
    {
        twice=twice->next->next;
        once=once->next;
    }
    printf("\n Middle element is %d",once->data);

}


void main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    display();
    middle();
}