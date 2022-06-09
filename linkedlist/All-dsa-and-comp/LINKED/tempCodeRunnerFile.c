
void display(struct node *p)
{
    do 
    {
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=first);
}
void insert()
{
    int m,data,i;
    struct node *t,*p=first;
    printf("\nEnter the data and the address to put it = \n");
    scanf("%d%d",&data,&m);
    t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    if(m==0)
    {
        if (first==NULL)
        {
            first=t;