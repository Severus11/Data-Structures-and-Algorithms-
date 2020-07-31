#include<bits/stdc++.h>
using namespace std;

void insert(int a[], int n)
{
    int temp, i=n;
    temp = a[n];
    while(i>1 && temp> a[i/2])
    {
        a[i] = a[i/2];
        i = i/2;
    }
    a[i] = temp;
}
void createheap(int a[], int n)
{
    for (int i=2; i<n ;i++)
    {
        insert(a, i);
    }
}
void deleteHeap(int a[])
{
    
}
int main()
{
    int arr[]= {0,10,20,30,25,5,40,35};
    createheap(arr,8);
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}