#include "display.h"

void oddtoeven()
{
    struct node *odd=head,*even=head,*track=head;
    int temp;
    while(track)
    {
        if(track->data%2==0)
        {
            even=track;
        }
        if(track->data%2!=0)
        {
            odd=track;
        }
        if(odd)
        
    }
}