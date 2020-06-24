/* A linked list is a collection of nodes. Each node has two contents: Data in form of string/ float integer etc
and the address to the next node. Each node is created in heap memory. 
1. T0 create a node, we need a pointer of type Node
2.this pointer has access to the elements of the node as : p->data to acess data &
p->next to acesss the adress of the next node.
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;

}*first = NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first -> data= arr[0];
    first ->next = NULL;
    last = first;

    for (i=1; i<n ; i++)
    {
        t= new Node;
        t-> data= arr[i];
        t->next= NULL;
        last->next = t;
        last= t;

    }

}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void recur_disp(struct Node *p )
{
    if (p!= NULL)
    {
        cout<<p->data<<" ";
        recur_disp(p->next); 
    }
}
void rev_ll(struct Node *p )
{
    if (p!= NULL)
    {
        rev_ll(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    int arr[]= {3,5,6,7,8,9,13,17};
    create(arr,8);
    display(first);   
    
    //recur_disp(first);
    rev_ll(first);

    return 0;
}