#include<bits/stdc++.h>
using namespace std;

void subarray_sum(vector <int> a, int sum)
{
    // we check if a prefix sum already exists in unordered_set for the subarray sum to be 0
    unordered_set<int> s;
    int i, n = a.size(), presum = 0;
    for(i=0;i<n;i++)
    {
        presum+=a[i];
        if(s.find(presum-sum)!=s.end() || presum==sum)
        {
            cout<<"Present"<<endl;
            return;
        }
        s.insert(presum);
    }
    cout<<"No subarray with given sum"<<endl;
}

void longest_subarray(vector <int> a, int sum)
{
    // we check if a prefix sum already exists in unordered_set for the subarray sum to be 0
    unordered_map<int,int> m;
    int i, n = a.size(), presum = 0, len = 0;
    for(i=0;i<n;i++)
    {
        presum+=a[i];
        if(presum==sum)
            len = i+1;
        
        if(m.find(presum)==m.end())
            m.insert({presum,i});

        if(m.find(presum-sum)!=m.end())
            len = max(len, i-m[presum-sum]);
    }
    cout<<"Length of longest subarray: "<<len;
}

int main()
{
    vector<int> a = {8,3,1,5,-6,6,2,2};
    int sum = 4;
    subarray_sum(a, sum);
    longest_subarray(a,sum);
}