#include <bits/stdc++.h>
using namespace std;

void useAND(int n, int k)
{
    int t = pow(2,k-1);                     //as 2^(k-1) is 00...010...00 ie 1 at kth position only
    if((n&t)==t)
        cout<<"Yes, kth bit is set"<<endl;
    else
        cout<<"No, kth is not set"<<endl;
}

void useLeft(int n, int k)
{
    int t = pow(2,k-1);
    if((n & (1<<(k-1)))!=0)
        cout<<"Yes, kth bit is set"<<endl;
    else
        cout<<"No, kth is not set"<<endl;
}

void useRight(int n, int k)
{
    int t = pow(2,k-1);
    if(((n>>(k-1)) & 1)==1)
        cout<<"Yes, kth bit is set"<<endl;
    else
        cout<<"No, kth is not set"<<endl;
}

int main()
{
    cout<<"Enter no and kth bit index to check"<<endl;
    int n,k;
    cin>>n>>k;
    useAND(n,k);
    useLeft(n,k);
    useRight(n,k);
}