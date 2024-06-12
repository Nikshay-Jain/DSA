#include<bits/stdc++.h>
using namespace std;

void freq_count(vector<int> a)
{
    unordered_map <int,int> m;
    for(int x:a)
        m[x]++;
    for(auto y:m)
        cout<<y.first<<": "<<y.second<<endl;
}

int main()
{
    vector<int> a = {5,2,3,6,2,5,1,1,1,4,4,2,5,2,6,3,5,5,5};
    freq_count(a);
}