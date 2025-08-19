#include <bits/stdc++.h>
using namespace std;

int i;

// Time: O(n), extra space: O(b)
void leftrot(int a[], int n, int d)
{
    int b[d];
    for(i=0;i<n;i++)
    {
        if(i<d)
        b[i] = a[i];
        else
        a[i-d] = a[i];
    }
    for(i=0;i<d;i++)
        a[n-d+i] = b[i];

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

// Time: O(n), extra space: O(1)
void rev(int a[], int low, int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

void leftrot_rev(int a[], int n, int d)
{
    rev(a, 0, d-1);
    rev(a, d, n-1);
    rev(a, 0, n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    cout<<"Enter size of array"<<endl;
    int n,d;
    cin>>n;
    int a[n];
    cout<<"Enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter no to rotate with"<<endl;
    cin>>d;
    leftrot_rev(a,n,d);
    cout<<endl;
    leftrot(a,n,d);
}