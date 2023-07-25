#include <bits/stdc++.h>
using namespace std;

int Peak(int a[], int n)
{
    int low=0, high=n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid]))
            return mid;
        else if(mid>0 && a[mid-1]>a[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main()
{
    cout<<"Enter no of elements"<<endl;
    int i,n,x;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    cout<<"Peak at index: "<<Peak(a,n);
}