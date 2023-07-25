#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter length of array"<<endl;
    int n,i=0,j=0,t=0;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t=1;
                cout<<"Element "<<a[i]<<" of position "<<i+1<<" is repeated"<<endl;
                break;
            }
        }
        if(t==1)
            break;
    }
}