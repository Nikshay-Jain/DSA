#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int n,i,count=0;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
}