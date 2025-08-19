#include<bits/stdc++.h>
using namespace std;

int merge_count_inv(vector<int> a, int l, int mid, int r)
{
    int n1 = mid-l+1, n2 = r-mid;
    vector<int> left(n1), right(n2);
    int i,j=0,res=0,k=l;

    for(i=0;i<n1;i++)
        left[i] = a[l+i];

    for(i=0;i<n2;i++)
        right[i] = a[mid+1+i];
    
    i=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
            res += (n1-i);
        }
        k++;
    }

    while(i<n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
    return res;
}

int count_inv(vector<int> a, int l, int r)
{
    int mid, res = 0;
    if(l<r)
    {
        mid = (l+r)/2;
        res += count_inv(a,l,mid);
        res += count_inv(a,mid+1,r);
        res += merge_count_inv(a,l,mid,r);
    }
    return res;
}

int main()
{
    vector<int> vec = {2,5,8,11,3,6,9,15};
    cout<<count_inv(vec,0,vec.size());
}