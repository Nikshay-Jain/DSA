#include<bits/stdc++.h>
using namespace std;

//Bottom -> Up approach

int fib(int n)
{
    int i;
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    for(i=2;i<=n;i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    cout<<fib(n);
}