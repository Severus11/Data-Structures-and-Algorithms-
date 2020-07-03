//
// Created by parth on 7/3/2020.
//
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;

}*first = NULL;

void create(int arr[], int n)
{
    struct Node *p, *last;
    first = new Node;

    first->data = arr[0];
    first ->next = NULL;
    last = first ;

    for (int i=1; i<n; i++)
    {
        p= new Node;
        p->data = arr[i];
        p->next = NULL;
        last->next= p;
        last = p;
    }
}

void rdp(struct Node *p)
{
    struct Node *q = p->next;
    while(q!=NULL)
    {
        if(p->data!= q->data)
        {
            p=q;
            q= q->next;

        } else{
            p->next = q->next;
            delete q;
            q=p->next;
        }

    }
}
void display(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        display(p=p->next);
    }
}


int main()
{
    int arr[]={1,2,3,4,5,5,5,6,7,7,9};
    create(arr,11);
    rdp(first);
    display(first);

    return 0;
}


