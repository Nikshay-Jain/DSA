#include <bits/stdc++.h>
using namespace std;

int vir(int n)
{
    if(n<=1)        // handles 2 base cases together
        return n;
    return (vir(n-2) + vir(n-1));
}

int main()
{
    int a=1,b=0,c=0,i=1,n;
    cout<<"Enter no of terms"<<endl;
    cin>>n;
    cout<<"Virahanka Sequence: "<<endl<<b<<endl<<a<<endl;
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        b=a;
        a=c;
        cout<<c<<endl;
    }
    cout<<"nth term is: "<<vir(n-1);
}