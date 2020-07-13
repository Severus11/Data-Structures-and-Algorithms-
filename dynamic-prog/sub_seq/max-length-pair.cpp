///this is a problem based on longest increasing subsequene
// pairs (a,b) is followed by chain of pairs (c,d) such that
// b<c. Problem: to find the longest chain of such pairs in given input

#include<iostream>
using namespace std;

class Pair
{
    public: 
    int a;
    int b;
};

int longestChain( Pair arr[], int n )
{
    int *dp= new int[n];
    // int *dp = (int*)malloc(sizeof(int* )n) in C language
    for(int i=0; i<n; i++)
    {
        dp[i]= 1;
    }

    for(int i=1;  i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i].a >arr[j].b && dp[i]< dp[j]+1)
            {
                dp[i] = dp[j] +1;
            }
        }
    }
    int u = INT32_MIN;
    for(int i=0; i<n; i++)
    {
        if(dp[i]>u)
        u= dp[i];
    }
    return u;
}
int main()
{
    Pair arr[] ={{5,24}, {15,25}, {27,40}, {50,60}};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<longestChain(arr, n);
    return 0;
}
