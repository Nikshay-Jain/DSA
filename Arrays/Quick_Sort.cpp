#include <bits/stdc++.h>
using namespace std;

int lomuto_part(int a[], int low, int high)
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

int hoare_part(int a[], int low, int high)
{
    int i = low-1, j = high+1;
    int pivot = a[low];
    while(true)
    {
        do
        {
            i++;
        } while (a[i]<pivot);
        do
        {
            j--;
        } while (a[j]>pivot);
        if(i>=j)
            return j;
        swap(a[i],a[j]);
    }
}

void qsort1(int a[], int l, int h)
{
    if(l<h)
    {
        int p = lomuto_part(a,l,h);
        qsort1(a,l,p);
        qsort1(a,p+1,h);
    }
}

void qsort2(int a[], int l, int h)
{
    if(l<h)
    {
        int p = hoare_part(a,l,h);
        qsort2(a,l,p);
        qsort2(a,p+1,h);
    }
}

int main()
{
    int i;
    int a[5] = {50,30,40,20,10};
    qsort1(a,0,5);
    cout<<"Lomuto Partition"<<endl;
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";

    cout<<endl;
    int b[5] = {50,30,40,20,10};
    qsort2(b,0,5);
    cout<<"\nHoare Partition"<<endl;
    for(i=0;i<5;i++)
        cout<<b[i]<<" ";
}