#include<bits/stdc++.h>
using namespace std;

int prev_next_small_method(vector<int> a) {
    int n=a.size(), i;
    vector<int> ps,ns;
    stack<int> s;

    // for prev smaller array
    ps.push_back(-1);
    s.push(0);
    for(i=1;i<n;i++) {
        while (s.empty()==false && a[s.top()]>=a[i])
            s.pop();
        ps.push_back(s.empty() ? (-1) : (s.top()));
        s.push(i);
    }

    // for next smaller array
    ns.push_back(n);
    stack<int>().swap(s);    // erase all data in s for reuse
    s.push(n-1);

    for(i=n-2;i>=0;i--) {
        while(s.empty()==false && a[s.top()]>=a[i])
            s.pop();
        ns.push_back(s.empty() ? (n) : (s.top()));
        s.push(i);
    }
    reverse(ns.begin(),ns.end());

    for(i=0;i<n;i++)
        cout<<ps[i]<<"\t"<<ns[i]<<endl;

    // calc area
    int curr, res=0;
    for(i=0;i<n;i++) {
        curr = a[i];
        curr += (i-ps[i]-1)*a[i];
        curr += (ns[i]-i-1)*a[i];
        res = max(res,curr);
    }
    return res;
}

int main() {
    vector<int> a = {5,3,4,1,5,4,2,3,1};
    cout<<prev_next_small_method(a);
}