#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int n,i,res=1,t;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>t;
        if(t!=a[res-1])
        {
            a[res] = t;
            res++;
        }
    }
    for(i=0;i<res;i++)
        cout<<a[i]<<endl;
}