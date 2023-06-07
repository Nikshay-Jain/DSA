#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0,s,st,ed;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter sum needed"<<endl;
    cin>>s;
    i=0;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
        cout<<i+1<<" "<<j<<endl;
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            ed=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<ed<<endl;
}