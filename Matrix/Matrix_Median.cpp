#include <bits/stdc++.h>
using namespace std;

void med(int r, int c, vector<vector<int>> a)
{
    int medpos = (r*c + 1)/2, mid, midpos,i,j;
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
            midpos += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin();    //finding the pos of mid lies after which index by bin search in every row
                                                                                    // ie index of 1st greater element than mid in each row
        if(midpos<medpos)
            minm = mid+1;
        else
            maxm = mid;                 // not mid-1 so as to ensure that the binary search continues to include the current middle value in the search range. This ensures that the algorithm correctly narrows down to the median value in case there are duplicate values or when the exact median value might be at the boundary of the search range
    }                                   // Using maxm = mid instead of maxm = mid - 1 ensures that you don't miss any potential median values and correctly narrows down the search range. This is especially important in matrices with duplicate values or when the median value is at the boundary of the search range. 
}

int main()
{
    int m = 3,n = 5;
    vector<vector<int>> a = {{5,10,20,30,40},           // row-wise sorted matrix - max element in last column and min in 1st
                             {1,2,3,4,6},
                             {11,13,15,17,19}};
    med(m,n,a);
}