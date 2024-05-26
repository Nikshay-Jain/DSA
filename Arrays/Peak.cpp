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
    int n = 7;
    int a[n] = {5,20,40,30,20,50,60}, b[5] = {-3,-4,-5,-1,-2};
    cout<<"Peak at index: "<<Peak(b,5);
}