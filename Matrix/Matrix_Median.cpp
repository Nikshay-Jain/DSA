#include <bits/stdc++.h>
#include <vector>
using namespace std;

int i,j;

void med(int r, int c, vector<vector<int>> a)
{
    int medpos = (r*c + 1)/2, mid, midpos;
    int minm = INT16_MAX, maxm = INT16_MIN;

    for(i=0;i<r;i++)
    {
        minm = min(a[i][0], minm);
        maxm = max(a[i][c-1], maxm);
    }

    while(minm<maxm)
    {
        mid = (minm + maxm)/2;
        midpos = 0;
        for(i=0;i<r;i++)
            midpos += upper_bound(a[i].begin(), a[i].end(), mid) - a[i];    //finding the pos of mid lies after which index by bin search in every row
        if(midpos<medpos)
            minm = mid+1;
        else
            maxm = mid;
    }
    cout<<minm;
}

int main()
{
    int m = 3,n = 3;
    vector<vector<int>> a = {{1,2,3},
                             {4,5,6},
                             {7,8,9}};
    med(m,n,a);
}


/*for(i=0;i<m;i++)
    {
        vector<int> v;
        for(j=0;j<n;j++)
        {
            cin>>t;
            v.push_back(t);
        }
        a.push_back(v);
    }*/