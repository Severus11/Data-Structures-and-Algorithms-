#include<bits/stdc++.h>
using namespace std;
int matrix[7][7];
int q= INT_MAX;
int near[7]={q,q,q,q,q,q,q};
int t[2][5];
void addmat(int i , int j, int c)
{
    matrix[i][j] = c;
}
void print(int matrix[][7])
{
    for(int i=0 ;i< 7; i++)
    {
        for(int j=0; j< 7; j ++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void prim(int matri[][7])
{
    int u, v, i , j;
    int minn=q;
    for(i =0; i<7; i++)
    {
        for(j=i; j< 7; j++)
        {
            if (matrix[i][j]<minn)
            {
                minn = matrix[i][j];
                u =i; v= j;
            }
        }
    } 
    t[0][0] = u; t[1][0]= v;
    near[u]= near [v] = 0;

    for(int i=0; i<7; i++)
    {
        if(near[i]!=0 && matrix[i][u]<matrix[i][v]) //which node(0 or 5 ? ) is the next cheapestand closest node?
        {
            near[i] = u;
        }
        else near[i] = v;
    }

    for(i=1; i<7; i++)
    {
        int minn =q;
        int k ;
        for (j =1; j<7; j++) 
        {
            if(near[j]!=0 && matrix[j][near[j]]<minn)
            {
                minn = matrix[j][near[j]];
                k=j;
            }
        }
        t[0][i] =k; t[i][1] = near[k];
        near[k] =0;
        for(j=1; j<7; j ++)
        {
            if()near[j]
        }
    }
}
int main()
{
    for (int i=0; i<7; i++)
    {
        cout<<near[i]<<"   ";
    }
    return 0;
}
