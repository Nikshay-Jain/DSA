#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int i,n,p;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            p+=(a[i]-a[i-1]);
    }
    cout<<p<<endl;
}