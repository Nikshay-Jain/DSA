#include <bits/stdc++.h>
#include <vector>
using namespace std;

int i,j;

void med(int r, int c, int **a)
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
            midpos += upper_bound(a[i], a[i]+c, mid) - a[i];    //finding the pos of mid lies after which index by bin search in every row
        if(midpos<medpos)
            minm = mid+1;
        else
            maxm = mid;
    }
    cout<<minm;
}

int main()
{
    int m,n;
    cout<<"Enter order of matrices"<<endl;
    cin>>m>>n;
    cout<<"Enter row-wise sorted matrix"<<endl;
    int **a = new int*[m];

    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
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