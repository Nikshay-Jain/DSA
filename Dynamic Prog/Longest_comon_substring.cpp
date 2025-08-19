#include<bits/stdc++.h>
using namespace std;

//Naive recursive soln
int substr1(string s1, string s2, int m, int n)
{
    if(m==0 || n==0)
        return 0;
    else if(s1[m-1]==s2[n-2])
        return 1 + substr1(s1,s2,m-1,n-1);
    else
        return max(substr1(s1,s2,m-1,n), substr1(s1,s2,m,n-1));
}

vector<vector<int>> mem;

//Opt memoisation soln (top -> bottom)
int substr2(string s1, string s2, int m, int n, vector<vector<int>> mem)
{
    if(mem[m][n]!=-1)
        return mem[m][n];
    if(m==0 || n==0)
        mem[m][n] = 0;
    else if(s1[m-1]==s2[n-1])
        mem[m][n] = 1 + substr2(s1,s2,m-1,n-1,mem);
    else
        mem[m][n] = max(substr2(s1,s2,m-1,n,mem), substr2(s1,s2,m,n-1,mem));
    return mem[m][n];
}

//Opt tabulation soln (bottom -> up)
int substr3(string s1, string s2, int m, int n)
{
    int t[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)       //initialise the 1st row as 0
    t[i][0] = 0;

    for(j=0;j<=n;j++)       //initialise the 1st column as 0
    t[0][j] = 0;
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }    
    return t[m][n];
}

int main()
{
    int m,n;
    string s1 = "axbyz";
    string s2 = "abz";
    m = s1.length();
    n = s2.length();

    mem = vector<vector<int>>(m+1, vector<int>(n+1, -1));

    cout<<1+substr1(s1,s2,m,n)<<endl;
    cout<<substr2(s1,s2,m,n,mem)<<endl;
    cout<<substr3(s1,s2,m,n);
}