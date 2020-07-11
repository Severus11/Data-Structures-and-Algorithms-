#include<iostream>

using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{
    if(n==0 || W==0) return 0;
    if(wt[n-1]>W)
        return knapsack(W, wt, val, n-1);
    else
    {
        return max(val[n-1]+ knapsack(W-wt[n-1],wt,val, n-1), knapsack(W,wt,val,n-1));
    }   
}
int main()
{
    int wt[]= {5, 3 , 4 , 2};
    int val[]= {60 , 50 , 70 , 30};
    int W =5;
    int n= sizeof(val)/ sizeof(val[0]);
    cout<<knapsack(W, wt, val, n);
    return 0;
}