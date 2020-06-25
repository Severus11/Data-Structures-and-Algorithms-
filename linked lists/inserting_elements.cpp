/*in a linked list, new nodes can be added at the end, between two nodes and at the beginning*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first= NULL;

void create (int arr[], int n)
{
    int i ;
    struct Node *t, *last;

    first = new Node;
    first->data= arr[0];
    first->next= NULL;
    first= last;

    for (i=1; i<n;i++)
    {
        struct Node *t;
        t->data= arr[i];
        t->next= NULL;
        last= t;
    }
}


void insert(struct Node *p, int index, int x)
{
    if(index< 0 | index > count(first))
        return ;
    struct Node *t;
    t= new Node;
    t-> data = x;
    if (index ==0)
    {
        t->next = first;
        t= first;

    }
    else 
    {
        for (int i=0; i<index-1; i++)
        {
            p=p->next;
        }
        t->next = p->next;
        p->next =t;
        
    }
}


void disp(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int arr[]= {3,22,47};
    create(arr, 3);
    insert(first, 2, 18);
    disp(first);
    return 0;
}