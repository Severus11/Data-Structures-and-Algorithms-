/* this is the program to count and search for the maximum element in a integer type linked list.
while traversing the list, a counter is incremented each time a node is traversed.
If the data value of the node is greater than the previous max value, then it is replaced*/

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
void recur_disp(struct Node *p )
{
    if (p!= NULL)
    {
        cout<<p->data<<" ";
        recur_disp(p->next); 
    }
}


int counting(struct Node *p)
{
    int count =0; 
    while(p)
    {
        count = count +1;
        p=p->next;
    }
    //cout<<count<<endl;
    return count;
}

int Max(struct Node *p)
{
int max=INT32_MIN;
while(p)
{
if(p->data>max)
max=p->data;
p=p->next;
}
return max;
}

int main()
{
    int arr[]={1,2,14,3,23,43,66,21,7,8,12};
    create(arr,11);
    recur_disp(first);
    cout<<"\n"<<counting(first)<<endl;
    cout<<Max(first);

    return 0;
}