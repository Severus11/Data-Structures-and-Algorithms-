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
int deleteHeap(int a[], int n)
{
    int val = a[1];
    int temp;
    int x = a[n];
    a[1] = a[n];
    a[n] = val;

    int i=1, j = 2*i;
    while(j<n-1)
    {
        if(a[j+1]> a[j])
        {
            j=j+1;
        }
        if(a[i]<a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i =j ;
            j = 2*j;
        }
        else 
        {
            break;
        }
    }
    //a[n] = x;
    return val;
}
int main()
{
    int arr[]= {0,10,20,30,25,5,40,35};
    createheap(arr,8);

    for (int i =7; i>1; i--)
    {
        deleteHeap(arr, i);
    }
    //deleteHeap(arr, 7);
    //deleteHeap(arr, 6);
    cout<<"the elements are heap sorted now"<<endl;
    for(int i=1; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"time complexity is: nlong  ;each to create heap and delete. Hence time complexity is O(nlogn)";
    return 0;
}