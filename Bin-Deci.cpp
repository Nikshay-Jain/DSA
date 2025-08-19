#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,bn,d=1,s=0;
    cout<<"Enter Decimal no"<<endl;
    cin>>n;
    t=n;
    while(n!=0)
    {
        d=n%2;
        s=10*s+d;
        n/=2;
    }
    cout<<"Binary conv of "<<t<<" is: "<<s<<endl;
    cout<<endl<<"Now, enter a Binary no"<<endl;
    cin>>bn;
    t=bn;
    s=0;
    i=0;
    while(bn!=0)
    {
        d=bn%10;
        s+=(pow(2.0,i)*d);
        bn/=10;
        i++;
    }
    cout<<"Decimal conv of "<<t<<" is: "<<s<<endl;
}