#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.second==b.second)
        return a.first < b.first;
    
    return a.second < b.second;
}

unordered_map<int,int> freq_count(vector<int> a)
{
    unordered_map <int,int> m;
    for(int x:a)
        m[x]++;
    for(auto y:m)
        cout<<y.first<<": "<<y.second<<endl;
    return m;
}

void freq_sort(unordered_map<int,int> m)
{
    vector<pair<int,int>> a;
    for(auto it:m)
        a.push_back(it);
    
    sort(a.begin(),a.end(),cmp);

    int i, n = a.size();
    for (auto p : a)
    {
        for(i=0;i<p.second;i++)
            cout<<p.first <<" ";
    }
}

int main()
{
    vector<int> a = {5,2,3,6,2,5,1,1,1,4,4,2,5,2,6,3,5,5,5};
    freq_sort(freq_count(a));
}