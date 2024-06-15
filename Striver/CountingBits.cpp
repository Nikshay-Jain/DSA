//Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n)
{
    vector<int> v(n+1);
    v[0]=0;
    cout<<v[0]<<endl;
    int i;
    for(i=1;i<=n;i++)
    {
        v[i]=v[i/2]+i%2;
        cout<<v[i]<<endl;
    }

    return v;
}

int main()
{
    countBits(5);
}