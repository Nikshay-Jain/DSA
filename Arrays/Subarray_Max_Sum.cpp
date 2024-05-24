#include<bits/stdc++.h>
using namespace std;

int i,j,n,sum=0;

//O(n) = n
int Kadane_Algo(int n,int a[])
{
    int sum = 0, max_sum = INT_MIN;
    for(i=0;i<n;i++)
    {
        sum+=a[i];    // Sum till that element should not be -ve as we're sure to start from next element (if +ve)
        if(sum<0)
            sum=0;
        max_sum = max(max_sum,sum);
    }
    return max_sum;  
}

//O(n) = n
int Circular(int n,int a[])
{
    int cirsum=0,totsum=0;

    int normalsum = Kadane_Algo(n,a);

    // Finding tot sum of array and negating the array elements.
    for(i=0;i<n;i++)
    {
        totsum+=a[i];
        a[i] = -a[i];
    }
    
    //subt min sum part from the total sum by finding normal min sum subarray by kadane by finding max subarray sum among negated elements
    cirsum = totsum + (Kadane_Algo(n,a));
    return max(cirsum,normalsum);
}

int main()
{
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Kadane's Algorithm: "<<Kadane_Algo(n,a)<<endl;                     //O(n) = n
    cout<<"Circular Subarray: "<<Circular(n,a)<<endl;                         //O(n) = n
}