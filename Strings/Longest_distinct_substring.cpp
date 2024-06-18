#include<bits/stdc++.h>
using namespace std;

int dist_substr(string str)
{
    if(str.empty())
        return 0;
    
    int res = 0, i, j = 0, n = str.size(), maxEnd;
    vector<int> prev(256, -1);                      // as no character is encountered yet so all -1

    for(i=0;i<n;i++)
    {
        j = max(j,prev[str[i]] + 1);
        maxEnd = i-j+1;
        res = max(res,maxEnd);
        prev[str[i]] = i;
    }
    return res;
}

int main()
{
    string str = "abaacdbab";
    cout<<dist_substr(str);
}