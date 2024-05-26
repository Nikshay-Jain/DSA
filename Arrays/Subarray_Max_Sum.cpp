#include<bits/stdc++.h>
using namespace std;

int i,j,n,sum=0;

// Max Sum

//O(n) = n
int Kadane_Algo(int n,int a[])
{
    int sum = 0, max_sum = INT_MIN;
    for(i=0;i<n;i++)
    {
        sum+=a[i];    // Sum till that element should not be -ve as we're sure to start from next element (if +ve)
        max_sum = max(max_sum,sum);
        if(sum<0)
            sum=0;
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

// Max Product subarray
int maxProduct(int n, int nums[])
{
    int i;
    if (n == 0)
        return 0;
    int max_prod = 1;
    int min_prod = 1;
    int result = nums[0];

    for (i = 0; i < n; i++)
    {
        int temp_max = max({ nums[i], max_prod * nums[i], min_prod * nums[i] });
        min_prod = min({ nums[i], max_prod * nums[i], min_prod * nums[i] });
        max_prod = temp_max;
        result = max(result, max_prod);
    }
    return result;
}

int main()
{
    int n=3;
    int a[n] = {3,-2,-5};
    cout<<"Kadane's Algorithm: "<<Kadane_Algo(n,a)<<endl;                     //O(n) = n
    cout<<"Circular Subarray sum: "<<Circular(n,a)<<endl;                     //O(n) = n
    cout<<"Max product of subarray: "<<maxProduct(n,a);
}