#include<bits/stdc++.h>
using namespace std;

//uses DP to give O(n) = n**2
int lis1(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;
    int i,j;
    for(i=0;i<n;i++)
    {
        lis[i] = 1;
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
                lis[i] = max(lis[i],lis[j] + 1);
        }
    }
    int res = lis[0];
    for(i=0;i<n;i++)
        res = max(res,lis[i]);
    return res;
}

//uses bin search to give O(n) = nlog(n)
int ceil(int tail[], int r, int l, int x)
{
    int m;
    while(r>l)
    {
        m = l+((r-l)/2);
        if(tail[m]>=x)
            r = m;
        else
            l = m+1;
    }
    return r;
}
int lis2(int arr[], int n)
{
    int tail[n], len = 1;
    tail[0] = arr[0];
    int i,c;
    for(i=1;i<n;i++)
    {
        if(arr[i]>tail[len-1])
        {
            tail[len] = arr[i];
            len++;
        }
        else
        {
            c = ceil(tail,len-1,0,arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}

int main()
{
    int arr[] = {10,5,18,7,2,9,10,11,12};
    cout<<lis1(arr,9)<<endl;
    cout<<lis2(arr,9)<<endl;
}