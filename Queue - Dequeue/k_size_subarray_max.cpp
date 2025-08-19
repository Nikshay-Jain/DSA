#include<bits/stdc++.h>
using namespace std;

void max_in_subarray(vector<int> v, int k) {
    int i, n = v.size();
    deque<int> dq;
    dq.push_front(v[0]);

    for(i=1;i<n;i++) {
        if(v[i]>dq.front()) {
            dq.pop_front();
            dq.push_front(v[i]);
        }
        else
            dq.push_back(v[i]);

        if(i>=k-1)
            cout<<dq.front()<<" ";
    }
}

int main() {
    vector<int> v = {10,5,8,12,13,15,7,16};
    int k = 3;
    max_in_subarray(v,k);
}