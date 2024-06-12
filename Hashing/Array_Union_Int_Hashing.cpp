#include<bits/stdc++.h>
using namespace std;

void array_intersection(vector<int> a, vector <int> b)
{
    int n = b.size(), i, res;
    unordered_set <int> s1(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        if(s1.find(b[i]) != s1.end())
        {
            cout<<b[i]<<" ";
            s1.erase(b[i]);
        }
    }
}

void array_union(vector<int> a, vector <int> b)
{
    int n = b.size(), i, res;
    unordered_set <int> s1(a.begin(),a.end());
    for(i=0;i<n;i++)
        s1.insert(b[i]);
    for(int x:s1)
        cout<<x<<" ";
}

int main()
{
    vector<int> a = {10,20,30,30,50}, b = {5,20,20,40,50,50};
    array_intersection(a,b);
    cout<<endl;
    array_union(a,b);
}