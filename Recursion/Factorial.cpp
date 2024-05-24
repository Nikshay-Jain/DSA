#include <bits/stdc++.h>
using namespace std;

int fact(int n, int k)      //Using Tail recursion to speed up the proces
{
    if(n==0)
        return k;
    return fact(n-1,k*n);
}

int main()
{
    cout<<"Enter n"<<endl;
    int n,k=1;
    cin>>n;
    cout<<fact(n,k);
}