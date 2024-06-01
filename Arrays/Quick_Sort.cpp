#include <bits/stdc++.h>
using namespace std;

int part(int a[], int low, int high)
{
    int pivot = a[high-1], i = low - 1, j;

    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high-1]);
    return i+1;
}

void qsort(int a[], int l, int h)
{
    if(l<h)
    {
        int p = part(a,l,h);
        qsort(a,l,p);
        qsort(a,p+1,h);
    }
}

void main()
{
    ;
}