#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ans=-1;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    const int N=1e6+2;
    bool b[N];
    for(i=0;i<N;i++)
        b[i]=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
            b[a[i]]=1;
    }
    for(i=1;i<N;i++)
    {
        if(b[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}