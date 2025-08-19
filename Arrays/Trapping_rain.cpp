#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int i,n;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    int lmax[n], rmax[n],w=0;
    lmax[0] = a[0];
    rmax[n-1] = a[n-1];
    for(i=1;i<n;i++)
        (a[i]>lmax[i-1]) ? (lmax[i] = a[i]):(lmax[i] = lmax[i-1]);
    for(i=n-2;i>=0;i--)
        (a[i]>rmax[i+1]) ? (rmax[i] = a[i]):(rmax[i] = rmax[i+1]);
    for(i=1;i<n;i++)
        w+=(min(lmax[i],rmax[i])-a[i]);
    cout<<w<<" units water stored in tanks with given wall heights";
}