#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if(n==1)
        return 0;
    else
        return (jos(n-1,k)+k)%n;    // gives the next shooter person 
}

int main()
{
    cout<<"Enter no of people and kth index to be killed"<<endl;
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k);
}