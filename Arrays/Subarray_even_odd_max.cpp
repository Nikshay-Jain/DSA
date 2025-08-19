#include<bits/stdc++.h>
using namespace std;

int max_even_odd(vector <int> a)
{
    int d,i,c=0,maxc=0,n=a.size();
    
    for(i=1;i<n;i++)
    {
        d = a[i]-a[i-1];
        if(d%2!=0)
            c++;
        else
            c=0;
        maxc = max(maxc,c);
    }
    return maxc+1;
}

int main()
{
    vector <int> a = {10,12,8,4};
    cout<<max_even_odd(a);
}