//recursive approach
#include<iostream>
using namespace std;

int longestps(char *s, int i, int j)
{
    if(i==j) return 1;
    if(s[i]==s[j] && i+1==j) return 2;
    
    if(s[i]== s[j])
    {
        return(longestps(s,i+1, j-1)+2);
    }
    else
    {
        return(max(longestps(s,i,j-1), longestps(s, i+1, j)));
    }    
}

int main()
{
    char s[]= "agbdba";
    int n= sizeof(s);

    cout<<longestps(s,0, n-1)<<endl;
    return 0;
}