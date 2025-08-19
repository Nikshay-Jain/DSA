#include <bits/stdc++.h>
using namespace std;

//O(1)
bool check(int n)
{
    if (n==0)
        return false;
    return((n & (n-1))==0);
}

int main()
{
    int n;
    cout<<"Enter no to be checked"<<endl;
    cin>>n;
    cout<<check(n);
}