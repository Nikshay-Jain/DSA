#include<bits/stdc++.h>
using namespace std;

int i,j,n,sum=0;

//O(n) = n^2
int Cumulative_Sum_Approach(int n,int a[])
{
    for(i=0;i<n;i++)
        sum+=a[i];

    int presum[n+1];
    presum[0]=0;

    for(i=1;i<n+1;i++)
        presum[i]=presum[i-1]+a[i-1];
    
    int max_sum=INT_MIN;
    for(i=0;i<n+1;i++)
    {
        sum=0;
        for(j=0;j<i;j++)
        {
            sum=presum[i]-presum[j];
            max_sum=max(sum,max_sum);
        }
    }
    return max_sum;
}

//O(n) = n
int Kadane_Algo(int n,int a[])
{
    int sum = 0, max_sum = INT_MIN;
    for(i=0;i<n;i++)
    {
        sum+=a[i];    // Sum till that element should not be -ve as that decreases its chance to increase as we traverse ahead
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

    // Finding tot sum of array and Negating the array elements
    for(i=0;i<n;i++)
    {
        totsum+=a[i];
        a[i] = -a[i];
    }
                                //finding normal min sum subarray by kadane by finding max subarray sum among negated elements
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
    cout<<"Cumulative Sum Approach: "<<Cumulative_Sum_Approach(n,a)<<endl;    //O(n) = n^2
    cout<<"Kadane's Algorithm: "<<Kadane_Algo(n,a)<<endl;                     //O(n) = n
    cout<<"Circular Subarray: "<<Circular(n,a)<<endl;                         //O(n) = n
}