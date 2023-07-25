#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int a[], int n, int k, int mid)
{
    int req = 1, sum = 0, i;
    for(i=0;i<n;i++)
    {
        if((sum + a[i])>mid)
        {
            req++;
            sum = a[i];
        }
        else
        sum+=a[i];
    }
    return(req<=k);
}

int pages(int a[], int n, int k)
{
    int st, ed, mid, sum = 0, i, mx, res = 0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        mx = max(mx, a[i]);
    }
    st = mx, ed = sum;
    while(st<=ed)
    {
        mid = (st+ed)/2;
        if(isFeasible(a,n,k,mid))
        {
            res = mid;
            ed = mid-1;
        }
        else
            st = mid+1;
    }
    return res;
}

int main()
{
    int i,n,k;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter no of students"<<endl;
    cin>>k;
    cout<<pages(a,n,k);
}