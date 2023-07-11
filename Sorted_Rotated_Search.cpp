#include <bits/stdc++.h>
using namespace std;

int sort_rot(int a[], int n, int x)
{
    int low = 0, high = n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;

        if(a[mid]==x)
            return mid;
        else if(a[low]<a[mid])          //Checking if left portion of mid is sorted or not
        {
            if(a[low]<=x && a[mid]>x)   //Checking if x might lie in that sorted range.
                high = mid-1;           //If yes, enter in that region else exit it
            else
                low = mid+1;
        }
        else
        {
            if(a[high]>=x && a[mid]<x)  //Checking if x lies in the rotated range
                low = mid+1;            //If yes, enter in that region else exit it
            else
                high = mid-1;
        }
    }
    return -1;
}

int main()
{
    cout<<"Enter no of elements"<<endl;
    int i,n,x;
    cin>>n;
    cout<<"Enter sorted array"<<endl;
    int a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter target no to be searched"<<endl;
    cin>>x;
    cout<<"Index of element: "<<sort_rot(a,n,x);
}