#include <bits/stdc++.h>
using namespace std;

//given L and R arrays marking the start aand end of natural nos arrays, find most common element in all.
//given range is 1 to 3, 2 to 5, 3 to 7

int main()
{
    int L[] = {1,2,3};
    int R[] = {3,5,7};
    int n = R[-1] + 1;
    int m = 3, i;
    vector <int> a(n,0);
    for(i=0;i<m;i++)
    {
        a[L[i]] = 1;
        a[R[i] + 1] = -1;
    }

    // calc prefix sum array
    vector <int> presum(n,0);
    int maxm = INT_MIN, res = 0;
    for(i=1;i<n;i++)
    {
        presum[i] = presum[i-1] + a[i];
        if(maxm<presum[i])
        {
            maxm = max(maxm,presum[i]);
            res = i;
        }
    }
    cout<<res<<" is the number appearing max no of times in the given ranges";
}