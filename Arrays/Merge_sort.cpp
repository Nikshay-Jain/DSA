#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid-low+1, n2 = high-mid;
    int left[n1], right[n2];
    int i,j,k;

    for(i=0;i<n1;i++)
        left[i] = a[low+i];
    for(j=0;j<n2;j++)
        right[i] = a[n1+i];
    
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2)             // to exit the loop as soon as one half is printed fully
    {
        if(left[i]<=right[j])
        {
            a[k] = left[i];
            k++;
            i++;
        }
        else
        {
            a[k] = right[j];
            k++;
            j++;
        }
    }

    // to print the second half, 1 of these 2 are executed
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
}

void merge_sort(int a[], int l, int r)
{
    int mid;
    if(l<r)                     // to check for atleast 2 elements in array
    {
        mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    int a[7] = {10,15,20,40,8,11,55};
    int low = 0, mid = 3, high = 6;

    // array is sorted from 0 to 3 and 4 to 6
    merge_sort(a,low,high);
    for(int i=0;i<7;i++)
    cout<<a[i]<<endl;
}