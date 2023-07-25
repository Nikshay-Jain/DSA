#include <bits/stdc++.h>
using namespace std;

double med(int a1[], int a2[], int n1, int n2)
{
    int beg1 = 0, end1 = n1, med = 0,i1,i2,min1,max1,min2,max2;

    while(beg1<end1)
    {
        i1 = (beg1 + end1)/2;
        i2 = ((n1+n2+1)/2) - i1;
        min1 = (i1==n1) ? INT_MAX : a1[i1];
        max1 = (i1==0) ? INT_MIN : a1[i1-1];
        min2 = (i2==n2) ? INT_MAX : a2[i2];
        max2 = (i2==0) ? INT_MIN : a2[i2-1];

        if(max1<=min2 && max2<=min1)
        {
            if((n1+n2)%2==0)
                return ((double) (max(max1,max2) + min(min1,min2))/2);
            else
                return ((double) max(max1,max2));
        }
        else if(max1>min2)
            end1 = i1-1;
        else
            beg1 = i1+1;
    }
}

int main()
{
    int i,n1,n2;
    cout<<"Enter no of elements in array 1"<<endl;
    cin>>n1;
    cout<<"Enter sorted array 1"<<endl;
    int a1[n1];
    for (i=0;i<n1;i++)
        cin>>a1[i];
    cout<<"Enter no of elements in array 2"<<endl;
    cin>>n2;
    cout<<"Enter sorted array 2"<<endl;
    int a2[n2];
    for (i=0;i<n2;i++)
        cin>>a2[i];
    cout<<"Median of the 2 arrays combined is: "<<med(a1,a2,n1,n2)<<endl;
}