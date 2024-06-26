#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x: dq)
        cout<<x<<" ";
    cout<<endl<<dq.front()<<" "<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size()<<endl;

    auto it = dq.begin();
    it++;
    dq.insert(it, 67);      // to insert in between the dequeue
    dq.erase(++it);         // to delete in between the dequeue
    for(auto x: dq)
        cout<<x<<" ";
}