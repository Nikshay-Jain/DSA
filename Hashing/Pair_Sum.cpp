#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int k)
{
    int i,comp;
    unordered_map<int, int> s;
    for (i=0;i<n;i++)
    {
        comp = k-a[i];
        if(s.find(comp)!=s.end())
        {
            cout<<s[comp]<<" "<<i<<endl;
            return true;
        }
        s[a[i]] = i;
    }
    return false;
}

int main()
{
    int n = 4,k = 10;
    int a[n] = {11,5,6,5};
    cout<<pairsum(a,n,k)<<endl;
}