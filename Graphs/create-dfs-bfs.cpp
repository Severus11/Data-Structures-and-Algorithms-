//graphs can be visualised as trees with interconnects
// graphs can be modelled as adjacency matrix or adjacency lists.
// BFS is like level order traversal and DFS is like preorder traverssal
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>matrix= {{0}}; 

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void adjmat(int i, int j)
{
    matrix[i][j] =1;
}
void print(vector<vector<int>>matrix)
{
    for (int i=0 ;i <matrix.size(); i++)
    {
        for (int j=0; j< matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
}

int main()
{
    int n, x,y;
    cout<<"Enter number of Nodes :";
    cin>>n;

    while(x != 9 && y!=9)
    {
        cin>>x>>y;
        adjmat(x,y);
    }
    print(matrix);
    return 0;
}