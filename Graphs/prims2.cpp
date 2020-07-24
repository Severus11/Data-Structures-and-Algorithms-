#include<bits/stdc++.h>
using namespace std;
int matrix[7][7];
int q= INT_MAX;
int near[7]={q,q,q,q,q,q,q};
int t = [2][5];
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
int main()
{
    for (int i=0; i<7; i++)
    {
        cout<<near[i]<<"   ";
    }
    return 0;
}
