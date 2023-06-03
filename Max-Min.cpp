#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[10]={1,2,3,4,5,6,7,8,9,10},i;
    int maxn=n[0];
    int minn=n[0];
    for (i=0;i<10;i++)
    {
        maxn=max(maxn,n[i]);
        minn=min(minn,n[i]);
    }
    cout<<maxn<<endl<<minn;
}