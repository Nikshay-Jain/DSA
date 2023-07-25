#include <bits/stdc++.h>
using namespace std;

// Leader is an element which is > all its left elements.

int main()
{
    cout<<"Enter size of array"<<endl;
    int i,n;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<a[n-1]<<" ";
    int res = a[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>res)
        {
            cout<<a[i]<<" ";
            res = a[i];
        }
    }
}