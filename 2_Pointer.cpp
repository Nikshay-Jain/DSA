#include <bits/stdc++.h>
using namespace std;

int low, high, sum, c;

//O(n)
int count_doublet(int a[], int n, int s, int low = 0, int high = 0)
{
    high = n-1, sum, c=0;
    while(low<=high)
    {
        sum = a[low]+a[high];
        if(sum==s)
        {
            low++;
            high--;
            c++;
        }
        else if(sum>s)
            high--;
        else
            low++;
    }
    return c;
}

//O(n**2)
int count_triplet(int a[], int n, int s)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        sum = s-a[i];
        c+=count_doublet(a,n,sum,i+1,n-1);
    }
    return c;
}

//O(n**2)
int count_pythagorean_triplet(int a[], int n)
{
    int i, c=0, s;
    for(i=0;i<n;i++)
    {
        s = pow(a[i],2);
        low=0, high=i;
        while(low<=high)
        {
            sum = pow(a[low],2) + pow(a[high],2);
            if(sum==s)
            {
                low++;
                high--;
                c++;
            }
            else if(sum>s)
                high--;
            else
                low++;
        }
    }
    return c;
}

int main()
{
    cout<<"Enter no of elements"<<endl;
    int i,n,s;
    cin>>n;
    cout<<"Enter sorted array"<<endl;
    int a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter target no to be searched"<<endl;
    cin>>s;
    cout<<"No of doublet pairs: "<<count_doublet(a,n,s)<<endl;
    cout<<"No of triplets : "<<count_triplet(a,n,s)<<endl;
    cout<<"No of pythagorean triplets : "<<count_pythagorean_triplet(a,n)<<endl;
}