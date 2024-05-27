#include <bits/stdc++.h>
using namespace std;

// note that atleast 1 half of the rotated array would be sorted
int sort_rot(vector <int> a, int n, int x)
{
    int low = 0, high = n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(a[mid]==x)
            return mid;

        else if(a[low]<=a[mid])          //Checking if left portion of mid is sorted or not
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
    int n=9,i, x = 20;
    vector <int> a = {300,400,450,500,1000,2000,10,20,100};
    cout<<"Index of element: "<<sort_rot(a,x,1);
}