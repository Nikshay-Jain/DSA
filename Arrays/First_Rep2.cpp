#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++) 
        cin>>a[i];
    const int N=pow(10,5);
    int idx[N];
    for(i=0;i<N;i++)
        idx[i]=-1;
    int minidx=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1)
            minidx=min(minidx,idx[a[i]]);
        else
            idx[a[i]]=i;
    }
    if(minidx==INT_MAX)
        cout<<"-1"<<endl;
    else
        cout<<minidx+1<<endl;
}