//longest common subsequence
//naive recursive algorithm
#include<bits/stdc++.h>
#include<string>
int max(int a,int b)
{
    if(a>b) return a;
    return b;
    
}
int lcs(string 
{
    if(m==0 ||n==0) return 0;
    else
    {
        if(x[m-1]= y[n-1])
        {
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
    string x ="sdsfs";

     
}