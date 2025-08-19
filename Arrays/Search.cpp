#include <bits/stdc++.h>
using namespace std;

int bin(int n, int a[], int x, int low = 0)
{
    int mid, high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int first_occurance(int n, int a[], int x)
{
    int low = 0, high = n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==x)
        {
            if(mid==0 || a[mid]!=a[mid-1])
                return mid;
            else
                high = mid-1;
        }
        else if(a[mid]>x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int last_occurance(int n, int a[], int x)
{
    int low = 0, high = n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==x)
        {
            if(mid==0 || a[mid]!=a[mid+1])
                return mid;
            else
                low = mid+1;
        }
        else if(a[mid]>x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int count_occurance(int n, int a[], int x)
{
    int first = first_occurance(n, a, x);
    if(first>=0)
        return (last_occurance(n, a, x) - first + 1);
    else
        return -1;
}

// Works for array lengths in billions too, where bin search alone fails
int unbounded_bin_search(int a[], int x)
{
    int i = 1;
    if(a[0]==x)
        return 0;
    
    while(a[i]<x)
        i*=2;
    
    if(a[i]==x)
        return i;
    else
        return bin(i-1, a, x, (i/2)+1);
}

int main()
{
    int n = 12;
    int a[n] = {10,10,15,20,20,20,30,40,40,45,50,60};
    int x = 40;
    cout<<"Index of Occurance: "<<bin(n,a,x)<<endl;
    cout<<"Index of 1st Occurance: "<<first_occurance(n,a,x)<<endl;
    cout<<"Index of last Occurance: "<<last_occurance(n,a,x)<<endl;
    cout<<"Count of Occurances: "<<count_occurance(n,a,x)<<endl;
    cout<<"Infinite array search method: "<<unbounded_bin_search(a,x)<<endl;
}