//find the length of longest palindrome subsequence 
//in a given string. Dp builds up the solution bottom up
#include<iostream>
using namespace std;

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}
int k;  
int longestps(char *s)
{
    int n= sizeof(s);
    int lps[n][n];
    for(int i =0 ; i<n; i++)
    {
        lps[i][i]= 1;
    }
    for(k=2; k<=n; k++)
    {
        for(int i=0; i<n-k+1; i++)
        {
            int j = i+k-1;
            if(s[i]== s[j] && k==2)
            {
                lps[i][j]=2;
            }
            else if(s[i]==s[j])
            {
                lps[i][j]= lps[i+1][j-1]+2;
            }
            else
            {
                lps[i][j]=  max(lps[i][j-1],lps[i+1][j]);
            }
        }
    }
    return lps[0][n-1];
}
int main()
{
    char s[]= "agbdba";
    cout<<longestps(s)<<endl;
    return 0;
}