#include<iostream>

using namespace std;

int lis(int arr[],int n )
{   int count=0;
    for(int i=0; i<=n; i++)
    {
        if (arr[i]>arr[i-1])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]= {22,10, 9, 33 , 21, 50, 41, 60};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<lis(arr,n);
    return 0;
}