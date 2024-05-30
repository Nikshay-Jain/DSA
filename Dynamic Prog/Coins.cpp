#include<bits/stdc++.h>
using namespace std;

int coins(vector<int> c, int sum)
{
    int n = c.size();
    int dp[sum+1][n+1];
    int i,j;

    for(i=0;i<=sum;i++)         //if we have 0 coins and sum>0, the no of combination poss is 0;
        dp[i][0] = 0;
    for(j=0;j<=n;j++)           //if sum = 0 --> 1 combination possible ie dont pick any of the coin.
        dp[0][j] = 1;
    
    for(i=1;i<=sum;i++)
    {
        for(j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(c[j-1]<=i)
                dp[i][j] += dp[i-c[j-1]][j];
        }
    }

    return dp[sum][n];
}

int main()
{
    vector<int> c = {2,5,3,6};
    int sum = 10;
    cout<<coins(c,sum)<<" ways possible";
}