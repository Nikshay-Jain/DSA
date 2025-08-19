#include<bits/stdc++.h>
using namespace std;

//Top -> Bottom approach

int fib(int n, int mem[])
{
    if(n==0 || n==1)
        mem[n] = n;
    else
        mem[n] = fib(n-1,mem) + fib(n-2,mem);
    
    return mem[n];
}

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    int i;
    cin>>n;
    int mem[n+1];
    for(i=0;i<=n;i++)
        mem[i] = -1;
    cout<<fib(n,mem);
}