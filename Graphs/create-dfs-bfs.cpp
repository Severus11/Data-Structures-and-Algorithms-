//graphs can be visualised as trees with interconnects
// graphs can be modelled as adjacency matrix or adjacency lists.
// BFS is like level order traversal and DFS is like preorder traverssal
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[5][5];

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void adjmat(int i, int j)
{
    arr[i][j] =1;
}

int main()
{
    int n, x,y;
    cout<<"Enter number of Nodes :";
    cin>>n;
    //int arr[n][n];

    while(x != 9 && y!=9)
    {
        cin>>x>>y;
        adjmat(x,y);
    }
    //print(arr);

    for(int i=0 ;i<5; i++)
    {
        for(int j=0 ;j<5; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}