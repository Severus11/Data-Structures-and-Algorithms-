#include<iostream>
using namespace std;

int ks(int W, int val[], int wt[], int n)
{
    int k[n+1][W+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=W; j++)
        {
            if(i==0 || j==0) k[i][j]= 0;
            else if(wt[i-1]<=j)
            {
                k[i][j]=max(val[i-1]+k[i-1][j- wt[i-1]], k[i-1][j]);
            }
            else
            {
                k[i][j]= k[i-1][j];
            }
            
        }
        
    }
    return k[n][W];
    
}

int main()
{
    int val[]={60, 50 , 70, 30};
    int wt[] ={5 ,3 , 4, 2};
    int n = sizeof(wt)/sizeof(wt[0]);
    int W =5;
    cout<<ks(W,val, wt, n);
    return 0;
}