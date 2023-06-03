#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

bool pairsum1(int a[],int n,int k)
{
    int low=0,high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low]+a[high]>k)
            high--;
        else
            low++;
    }
    return false;
}

bool pairsum2(int a[],int n,int k)
{
    int i,comp;
    std::unordered_map<int, int> num_dict;
    for (i=0;i<n;i++)
    {
        comp = k-a[i];
        if(num_dict.find(comp)!=num_dict.end())
        {
            cout<<num_dict[comp]<<" "<<i<<endl;
            return true;
        }
        num_dict[a[i]] = i;
    }
    return false;
}

int main()
{
    int i,n,k;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter sum to be searched"<<endl;
    cin>>k;
    cout<<"Algo 1: "<<pairsum1(a,n,k)<<endl;
    cout<<"Algo 2: "<<pairsum2(a,n,k)<<endl;
}