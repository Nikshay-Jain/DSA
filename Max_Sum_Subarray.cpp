#include<bits/stdc++.h>
using namespace std;

int i,j,n,sum=0;

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

int Kadane_Algo(int n,int a[])
{
    int presum = 0, max_sum = INT_MIN;
    for(i=0;i<n;i++)
    {
        presum+=a[i];    //Presum should not be -ve as that decreases the chance of sum to increase as we traverse ahead.
        if(presum<0)
            presum=0;
        max_sum = max(max_sum,presum);
    }
    return max_sum;  
}

int Circular(int n,int a[])
{
    int wrapsum=0,totsum=0;
    for(i=0;i<n;i++)
        totsum+=a[i];

    int nonwrapsum = Kadane_Algo(n,a);
    for(i=0;i<n;i++)
        a[i] = -a[i];
    wrapsum = totsum - (-Kadane_Algo(n,a));
    return max(wrapsum,nonwrapsum);
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