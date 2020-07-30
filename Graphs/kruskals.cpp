//kruskal says, take a minimum cost edge irresptive of being connected or not.
// if a cycle is forming, skip it 
//prim focussed on finding a tree. kruskal focusses on finding miniumum tree
#include<bits/stdc++.h>
#define I INT_MAX
using namespace std;

int se[8]= {-1,-1,-1,-1,-1,-1,-1,-1};
int edges[3][9]= {{1,1,2,2,3,4,4,5,5}, {2,6,3,7,4,5,7,6,7}, {25,5,8,10,18,16,14,20}};
int included[9]= {0}; int t[2][6];

void uni(int u, int v)
{
    if (se[u]<se[v])
    {
        se[u] = se[u]+ se[v];
        se[v]= u;
    }
    else
    {
        se[v] = se[v] + se[u];
        se[u] = v;
    }
}
int find(int u)
{
    int x =u , v =0; 
    while(se[x]>0)
    {
        x= se[x];
    }
    while(u!=x)
    {
        v= se[u];
        se[u] = x;
        u=v;
    }
    return x;
}
void kruskal(int edges[][9])
{
    int i=0; int j, k, n=7, e =9, min, u,v;
    while(i<n-1)
    {
        min = I;
        for (j =0; j <e ; j++)
        {
            if(included[j] ==0 && edges[2][j]<min)
            {
                min = edges[2][j];
                k =j; u = edges[0][j]; v= edges[1][j];
            }
        }
        if (find(u)!= find(v))
        {
            t[0][i] = u;  t[1][i] = v;
            uni(find(u), find(v));
            i++;
        }
        included[k] =1;
    }

}
int main()
{
    kruskal(edges);
    for(int i=0; i<6; i++)
    {
        cout<<t[0][i]<< ","<< t[1][i]<<endl;
    }
    return 0;
}