#include<bits/stdc++.h>
using namespace std;

int longest(vector<int> a)
{
    int n = a.size(), l=0, i, c0 = 0, c1 = 0;
    
    if(a[0]==1)
        c1 = 1;
    else
        c0 = 1;

    for(i=1;i<n;i++)
    {
        if(a[i]==1)
            c1++;
        else
            c0++;
        
        if(c0==c1)
            l = max(l,2*c0);
    }
    return l;
}

//length of longest subarray with equal no of 0s and 1s
int main()
{
    vector<int> a = {1,0,0,1,0,0,0,1,1,1,0,1};
    cout<<longest(a);
}