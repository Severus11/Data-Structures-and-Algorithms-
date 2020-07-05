/*doubly linked list is a list tht allows bidirectional traversal
node structure : poiner to prev , data, pointe to next node  
*/

#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next, *prev;
}*first =NULL;

void create(int arr[], int n)
{
    struct Node *p, *last;
    first = new Node;
    first->data = arr[0];
    first->prev= first->next =NULL;
    last =first;
    
    for(int i=1; i<n; i++)
    {
        p= new Node;
        p->data = arr[i];
        p->next = last->next;
        last->next = p;
        p->prev =last;
        last =p;

    }
}
int len(struct Node *p)
{
    int l =0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}
void insert(struct Node *p, int index, int x)
{
    struct Node *t, *q;
    if(index<0 || index>len(first))
    {
        return;
    }
    if(index ==0)
    {
        t= new Node;
        t->data = x;
        t->prev= NULL;
        t->next = first;
        first->prev =t;
        first =t;

    }
    else
    {
        for (int i=1; i<index-1; i++)
        {
            p=p->next;
        }
        t= new Node;
        t->data = x;
        t->next=p->next;
        t->prev=p;
        if(p->next)
        {
            p->next->prev =t;
            p->next =t;
        }
    }

}
void display(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->data <<" ";
        p=p->next;
    }
}
void del(struct Node *p, int index)
{
    struct Node *t;
    if(index <0 || index>len(first))
    {
        return;
    }
    if (index ==0)
    {
        
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,6};
    create(arr,6);
    display(first);
    cout<<endl;

    insert(first,3,28);
    display(first);
    cout<<endl;
    return 0;
}