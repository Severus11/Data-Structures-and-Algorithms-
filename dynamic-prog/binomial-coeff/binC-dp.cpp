//dynamically programmed
//use of optimal structure property and oveerlapping subproblem 
//time & space complexity o(n*k)
#include<iostream>
using namespace std;

int binCoeff(int n, int k)
{
    int mat[n+1][k+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=min(i,k); j++)
        {
            if(j==0 || j==i)
            mat[i][j]=1;
            else
            {
                mat[i][j]= mat[i-1][j-1] + mat[i-1][j];
            }
            
        }
    }
    return mat[n][k];
}
int main()
{
    int n= 4;
    int k =2;

    cout<<binCoeff(n,k);
    return 0;
}