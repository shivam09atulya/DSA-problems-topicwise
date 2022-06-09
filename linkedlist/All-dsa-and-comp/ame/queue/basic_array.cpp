#include<iostream>
#include<queue>

// Only diff between stack and queue declaration done here is that it is heap allocated while in stack it is stack allocated both can be done either ways
// this is observed only in array implementation of both either is correct 
using namespace std;

class Queue{
    int front;  
    int rear;
    unsigned capacity;
    int *arr;

    public:
    void createQueue(int data)
    {
        front=rear=-1;
        capacity=data;
        arr=new int[data];
    }


    bool enque(int x);
    int deque();
    void display();
    int peek();
    bool isEmpty();
    bool isFull();
};

bool Queue::isFull()
{
    return (rear==capacity-1);
}

bool Queue::isEmpty()
{
    return (rear==front);
}

bool Queue::enque(int x)
{
    if(isFull())
    {
        cout<<"Queue Full"<<endl;
        return false;
    }
    else{
        arr[++rear]=x;
        return true;
    }
} 

int Queue::deque()
{
    if(isEmpty())
    {
        cout<<"Queue Empty"<<endl;
        return -1;
    }
    else 
    {
        return arr[++front];
    }
}

void Queue::display()
{
    int i;
    for(i=front+1;i<=rear;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}


int main()
{
    class Queue q;
    q.createQueue(10);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.display();
    return 0;
}