    #include<iostream>

    using namespace std;
    class node{
        public:
        int data;
        class node *next;

        node();
        node(int val);
    };

    node::node():data(0),next(NULL){}

    node::node(int val)
    {
        data=val;
        next=NULL;
    }

    class linkedlist {
        int data;
        class node *next;
        node *head = NULL, *last = NULL;

    public:
        
        void insert(int val);
        void display();
    };

    void linkedlist::insert(int val)
    {
        if(head==NULL)
        {
            head=new node(val);
            last=head;
        }
        else
        {
            node *temp=new node(val);
            last->next=temp;
            last=temp;
        }
    }

    void linkedlist::display()
    {
        node *temp=head;
        while(temp!=NULL)
       { cout<<temp->data<<" ";
       temp=temp->next;}
        cout<<endl;
    }


    int main()
    {

        linkedlist t;
        t.insert(1);
        t.insert(2);
        t.insert(3);
        t.insert(4);
        t.insert(5);
        t.display();
        return 0;
    }