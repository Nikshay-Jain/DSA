#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,t=0,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n], presum[n], postsum[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    presum[0] = a[0];
    postsum[n-1] = a[n-1];

    //computing the prefix sum and postfix sum array
    for(i=1;i<n;i++)
    {
        presum[i] = presum[i-1] + a[i];
        postsum[n-i-1] = postsum[n-i] + a[n-i-1];
    }

    for(i=0;i<n;i++)
        cout<<presum[i]<<"\t"<<postsum[i]<<endl;

    //for eqm, check if prefix = postfix at a given posn. This same can be checked while calc pre and postfixes itself but done seperately for printing the arrays too.
    for(i=0;i<n;i++)
    {
        if(presum[i]==postsum[i])
        {
            cout<<"Yes at index: "<<i<<" ie at: "<<a[i];
            t=1;
            break;
        }
    }
    if(t==0)
        cout<<"No eqm pt present"<<endl;
}