//this is a program to generate a linked list by inserting a node only at the end of the list

#include<iostream>
#include <bits/stdc++.h>

using  namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first =NULL;

struct Node *last;

void create(int arr[], int n)
{
    int i;
    struct Node *t;
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

void insert(int x)
{
    Node *t= new Node;

    t-> data =x;
    t->next =NULL;
    if (first ==NULL)
    {
        first = last = t;
    }
    else
    {
        last->next =t;
        last =t;
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
    //int arr[]= {1,2,3,4,32,12,22};
    //create(arr,7);
    insert(6);
    insert(63);
    insert(26);

    display(first);
    return 0;
}
