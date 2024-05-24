#include <bits/stdc++.h>
using namespace std;

void missing(int a[], int n)
{
    int i, no = 0;
    for(i=0;i<n;i++)
    {
        no = no^(i+1)^(a[i]);         //n = (1^2^3^...^n^n+1)^(a[0]^a[1]^...^a[n-1])
    }
    no = no^(n+1);
    cout<<no<<" is missing";
}

// best soln to use sum of n consec int = n*(n+1)/2 and the subt array sum from this.
 
int main()
{
    int i,n,a[n];
    cout<<"Enter length of array"<<endl;
    cin>>n;
    cout<<"Enter array containing all nos from 1 to n+1 except the one to be found out"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    missing(a,n);
}