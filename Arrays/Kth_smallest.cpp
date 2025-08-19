#include<bits/stdc++.h>
using namespace std;

int l_part(int a[], int low, int high)
{
    int pivot = a[high], i = low - 1, j;

    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

int kth_smallest(int a[], int n, int k)
{
    int l = 0, h = n - 1, p;
    while (l <= h)
    {
        p = l_part(a, l, h);
        if (p == k - 1)
            return a[p];
        else if (p > k - 1)
            h = p - 1;
        else
            l = p + 1;
    }
    return -1;
}

int main()
{
    int n = 7, k = 2;
    int a[n] = {80,50,60,70,10,30,20};
    cout<<kth_smallest(a,n,k);
}