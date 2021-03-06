//given 2 strings s1 and s2, find the minimum number of opertions
//to reach the second string. 3 types of operations are 
//insert, delete or modify, assuming each of it is of the same cost
//Bottom up approach is taken. If the last ltter is same, then copy the digonal element 
//else least of the adjacent elements:

#include<iostream>
using namespace std;

int Min(int a, int b, int c)
{
    return min(min(a,b), c);
}

int editDis(string s1, string s2, int m, int  n)
{
    int dp[m+1][n+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if (i==0)
            {
                dp[i][j]= j;
            }
            else if(j==0)
            {
                dp[i][j]= i;
            }
            else if (s1[i-1]== s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= 1+ Min(dp[i-1][j],dp[i][j-1], dp[i-1][j-1]);
            }     
        }
    }
    return dp[m][n];
}
int main()
{
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.size();
    int n= s2.size();
    /*cout<<"enter initial string: "<<endl;
    cin>>s1;
    cout<<"enter final string: "<<endl;
    cin>>s2;*/
    cout<<"Minimum number of operations needed are: "<<editDis(s1,s2,m,n)<<endl;
    return 0;
}