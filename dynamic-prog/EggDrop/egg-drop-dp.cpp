//dynamic programming approach

#include<iostream>
using namespace std;

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}

int eggdrop(int e, int k)
{
    int d[e+1][k+1];

    for(int i=1; i<=e; i++)
    {
        d[i][0]=0;
        d[i][1]=1;
    }
    for(int i=1; i<=k; i++)
    {
        d[1][i]=i;
    }
    int res= INT32_MAX;
    for(int i=2; i<=k; i++)
    {
        for(int j=2; j<=e; j++)
        {
            d[i][j]= INT32_MAX;
            for(int x= 1; x<=j; x++)
            {
                res =1+ max(d[i-1][x-1], d[i][j-x]);
                if(res<d[i][j]) res= d[i][j];
            }
        }
    }
    return d[e][k];
}
int main()
{
    int nFloors = 10;
    int nEggs =2;

    cout<<eggdrop(nEggs, nFloors);
    return 0;
}