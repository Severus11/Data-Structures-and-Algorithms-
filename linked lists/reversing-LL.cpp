#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
}*first=NULL;

void insert(int x)
{
    struct node*last;
    node *t = new node;
    t->data=x;
    t->next =NULL;
    if(first==NULL)
    {
        last = first =t;
    }
    else
    {
        last->next =t;
        last =t ;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void reverseLL(struct node *p)
{
    struct node *q=NULL, *r=NULL;
    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first =q;
}

int main()
{
    insert(2);
    insert(23);
    insert(22);
    insert(19);
    display(first);

    cout<<"\n"<<"linked list is revesed !!"<<endl;

    reverseLL(first);
    display(first);

    return 0;
}