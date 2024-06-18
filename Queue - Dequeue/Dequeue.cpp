#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {10,20,30};
    d.push_front(5);
    d.push_back(50);
    for(auto x: d)
    cout<<x<<endl;
    cout<<d.front()<<" "<<d.back()<<endl;
    d.pop_front();
    d.pop_back();
    cout<<d.size();
}