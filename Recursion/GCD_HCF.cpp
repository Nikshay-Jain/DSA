//Optimised Eucledian algorithm

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    cout<<"Enter 2 nos"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a,b)<<endl;
    cout<<"HCF "<<(a*b/gcd(a,b))<<endl;
}