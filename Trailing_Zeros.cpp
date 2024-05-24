#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter no whose factorial needs to be checked"<<endl;
    int n,d=0;
    cin>>n;
    while(n!=0)         //O(n) = log(n)
    {
        d+=(n/5);       //adding floors of n/5 + n/25 + ...
        n/=5;
    }
    cout<<d<<endl;
}