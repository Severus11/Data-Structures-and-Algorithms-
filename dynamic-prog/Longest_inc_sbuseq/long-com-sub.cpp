//longest common subsequence
//naive recursive algorithm
#include<bits/stdc++.h>
#include<queue>
queue<string>q;
int max(int a,int b)
{
    if(a>b) return a;
    return b;
    
}

using namespace std;
int lcs(string x, string y, int m, int n)
{
    if(m==0 ||n==0) return 0;
    else
    {
        if(x[m-1]= y[n-1])
        {
            q.push(x[m-1]);
            return lcs(x,y, m-1, n-1) +1;
        }
        else
        {
            return max(lcs(x,y,m-1,n), lcs(x,y,m,n-1));
        }
    }
}


int main()
{
    string s = "werty";
    string t = "qety";
    int m= s.size();
    int n = t.size();

    cout<<lcs(s,t,m,n);
    return 0 ;
}