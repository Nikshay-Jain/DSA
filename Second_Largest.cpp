#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of array"<<endl;
    int n,i;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    int l = INT_MIN, sl = INT_MIN;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]<l && a[i]>sl)
            sl=a[i];
    }
    cout<<"2nd largest element: "<<((sl!=INT_MIN)?sl:-1);
}