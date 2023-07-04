#include<bits/stdc++.h>
using namespace std;

int subsum(int a[], int n, int sum)
{
    if(n==0)
        return ((sum==0)?1:0);
    
    return subsum(a, n-1, sum) + subsum(a,n-1,sum-a[n-1]);
}

int main()
{
    int n,i,j,k,sum;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter sum needed"<<endl;
    cin>>sum;
    
    cout<<"\nSubarrays:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            cout<<a[k]<<" ";
            cout<<endl;
        }
    }
    cout<<subsum(a, n, sum);
}