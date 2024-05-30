#include<bits/stdc++.h>
using namespace std;

int edit(string s1, string s2, int m, int n)
{
    int i,j;
    int dp[m+1][n+1];

    for(i=0;i<=m;i++)
        dp[i][0] = i;
    for(j=0;j<=n;j++)
        dp[0][j] = j;
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
        }
    }
    return dp[m][n];
}

int main()
{
    int m,n;
    string s1 = "nikshay";
    string s2 = "darshiel";
    m = s1.length();
    n = s2.length();
    cout<<edit(s1,s2,m,n)<<" operations needed among insert, delete, replace to change string 1 to 2";
}