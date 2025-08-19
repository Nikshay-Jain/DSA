#include <bits/stdc++.h>
using namespace std;

//for eqm, check if prefix = postfix at a given posn.
//This same can be checked while calc pre and postfixes itself but done seperately for printing the arrays too.
//Time: O(n) and Space: O(n) for preprocessing
int pre_post(int a[], int n)
{
    int i, t=0, presum[n], postsum[n];
    presum[0] = a[0];
    postsum[n-1] = a[n-1];

    //computing the prefix sum and postfix sum array
    for(i=1;i<n;i++)
    {
        presum[i] = presum[i-1] + a[i];
        postsum[n-i-1] = postsum[n-i] + a[n-i-1];
    }

    cout<<"Presum"<<"\t"<<"Postsum"<<endl;
    for(i=0;i<n;i++)
        cout<<presum[i]<<"\t"<<postsum[i]<<endl;
    
    for(i=0;i<n;i++)
    {
        if(presum[i]==postsum[i])
            return i;
    }
    return -1;
}

//Time: O(n) Space: O(1)
int eff_eq(int a[], int n)
{
    int sum = 0, i, lsum = 0;
    for(i=0;i<n;i++)
        sum+=a[i];
    
    // this sum actually acts as right sum as we keep on subt a[i]'s from it
    for(i=0;i<n;i++)
    {
        if(lsum==(sum-a[i]))
            return i;
        lsum+=a[i];
        sum-=a[i];
    }
    return -1;
}

int main()
{
    int n=3;
    int a[n] = {4,2,-2};

    int res1 = pre_post(a,n);
    int res2 = eff_eq(a,n);
    cout<<"Yes at index: "<<res1<<" ie at: "<<a[res1]<<endl;
    cout<<"Yes at index: "<<res2<<" ie at: "<<a[res2];
}