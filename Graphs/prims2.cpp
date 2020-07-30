#include<bits/stdc++.h>
# define I INT_MAX
using namespace std;
int matrix[][7]= {{I,25, I , I, I, 5 , I},
{25,I,12,I,I,I,10},{I,12,I,8,I,I,I}, {I,I,8,I,16,I,14}, {I,I,I,16,I,20,18}, {5,I,I,I,20,I,I}, {I,10,I,14,18,I,I}};
int q= INT_MAX;
int near[7]={q,q,q,q,q,q,q};
int t[2][6];
void init(int arr[][7])
{
    for(int i=0;i<7; i++)
    {
        for(int j=i; j<7; j++)
        {
            arr[i][j] = INT_MAX;
        }
    }
}
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

void prim(int matrix[][7])
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
    near[u]= near[v] = 0;

    for(int i=0; i<7; i++)
    {
        if(near[i]!=0 && matrix[i][u]<matrix[i][v]) //which node(0 or 5 ? ) is the next cheapestand closest node?
        {
            near[i] = u;
        }
        else near[i] = v;
    }

    for(i=0; i<6; i++)
    {
        int minn =q;
        int k ;
        for (j =0; j<7; j++) 
        {
            if(near[j]!=0 && matrix[j][near[j]]<minn)
            {
                k=j;
                minn = matrix[j][near[j]];
            }
        }
        t[0][i] =k; 
        t[1][i] = near[k];
        near[k] =0;
        for(j=0; j<7; j ++)
        {
            if(near[j]!= 0 && matrix[j][k]< matrix[j][near[j]])
            near[j]=k;
        }
    }
    for(int i=0; i<6; i++)
    {
        cout<<t[0][i]<< ","<< t[1][i]<<endl;
    }
}
int main()
{
    /*int x,y, c,n;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    cout<<"Enter the edges, followed by their cost"<<endl;
    init(matrix);

    while(x!=9 && y!=9 && c!=9)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>x>>y>>c;
                addmat(x,y,c);
            }
        }
    }
    print(matrix);*/
    
    prim(matrix);
    return 0;
}
