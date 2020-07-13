//this is the longest bitonic subsequence problem
// the lbs is a sequence which initially increases and then decreases.
// a sorted array is a lbs with decreasing part empty and vice versa.

#include<iostream>
using namespace std;

int lbs(int arr[],int n)
{
    int *lis, *lds;
    int i, j;

    lis = (int* )malloc(sizeof(int)* n);
    lds= (int* )malloc(sizeof(int)* n);

    for(int i=0; i<n ; i++)
    {
        lis[i]= 1;
        lds[i] = 1;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
            {
                lis[i]= lis[j] + 1;
            }
        }
    }

    ///lds starts here

    for(int i= n-2; i>=0; i--)
    {
        for(int j =n-1;j>i; j--)
        {
            if(arr[i] >arr[j] && lds[i]<lds[j]+1)
            lds[i] =lds[j]+1;
        }
    }

    for(int i =0; i<n; i++)
    {
        if(lis[i]>lis[i])
        {
            cout<<arr[i]
        }
        
    }


    int maxi = lis[0]  + lds[0] -1;
    for(i=1; i<n; i++)
    {
        if(lis[i]+lds[i]-1>maxi)
        {
            maxi = lis[i] + lds[i] -1;
        }
    }
    return maxi;
}

int main()
{
    int arr[] ={2,54,7,12,17,22,13,59,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<lbs(arr,n)<<endl;

    return 0;
}
