#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=2,i,ans=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for (i=0;i<n;i++)
    cin>>a[i];
    int pd=a[1]-a[0];
    i=2;
    while(i<n)
    {
        if(a[i]-a[i-1]==pd)
            l++;
        else
        {
            pd=a[i]-a[i-1];
            l=2;
        }
        ans=max(ans,l);
        i++;
    }
    cout<<ans;
}