
int main()
{
    MinStack *obj=new MinStack();
    obj->push(-4);
    obj->push(2);
    obj->push(-1);
    obj->push(4);
    cout<<obj->getMin();
    cout<<obj->top();
    obj->pop();
    cout<<obj->getMin();
}