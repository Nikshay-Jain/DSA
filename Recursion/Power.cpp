#include <bits/stdc++.h>
using namespace std;

//Time complexity = O(log n) and Space Complexity = o(log(n)) for function calls
int power(int a, int n)
{
    if(n==0)
        return 1;
    int t = power(a,n/2);
    t*=t;
    if(n%2==0)
        return (t);
    else
        return (t*a);
}

//Time complexity = O(log n) and Space Complexity = O(1)
int bin_pow(int a, int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
            res = res*a;
        a*=a;
        n/=2;
    }
    return res;
}

int main()
{
    cout<<"Enter base and power"<<endl;
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<bin_pow(a,n)<<endl;
    cout<<pow(a,n)<<endl;
}