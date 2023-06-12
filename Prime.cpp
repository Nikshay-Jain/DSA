#include <bits/stdc++.h>
using namespace std;

int i;

// O(n)=n/6
bool prime(int n)
{
    if(n==2 || n==3)
        return true;
    else if(n%2==0 || n%3==0 || n==1)
        return false;
    else
    {
        for(i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
                return false;
        }
    }
    return true;
}

// O(n)=n/6
void prime_factors(int n)
{
    while(n%2==0)
    {
        cout<<2<<endl;
        n/=2;
    }
    while(n%3==0)
    {
        cout<<3<<endl;
        n/=3;
    }
    for(i=5;i*i<=n;i+=6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n/=i;
        }
        while(n%(i+2)==0)
        {
            cout<<(i+2)<<endl;
            n/=(i+2);
        }
    }
    if(n>3)
        cout<<n;
}

//O(n)=2*n^0.5
void factors(int n)
{
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
            cout<<(n/i)<<" ";
    }
}

//Sieve of Eratosthenes algo
void allPrime(int n)
{
    vector <bool> isPrime(n+1,true);
    for(i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

int main()
{
    cout<<"Enter no"<<endl;
    int n;
    cin>>n;
    cout<<"Prime status "<<prime(n)<<endl<<endl;
    cout<<"Prime factors:"<<endl;
    prime_factors(n);
    cout<<endl<<endl<<"All factors:"<<endl;
    factors(n);
    cout<<endl<<"Primes before entered no"<<endl;
    allPrime(n);
}