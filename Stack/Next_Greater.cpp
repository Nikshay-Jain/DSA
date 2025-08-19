#include<bits/stdc++.h>
using namespace std;

void nxt_grt(vector<int> a) {
    int i, n=a.size();
    stack<int> s;
    s.push(a[n-1]);
    vector<int> ng;
    ng.push_back(-1);

    for(i=n-2;i>=0;i--) {
        while(s.empty()==false && s.top()<=a[i])     // based on finding prev greater element for array in reverse order
            s.pop();
        
        ng.push_back(s.empty() ? (-1) : (s.top()));
        s.push(a[i]);
    }

    reverse(ng.begin(),ng.end());
    for(i=0;i<n;i++)
        cout<<ng[i]<<" ";
}

int main() {
    vector<int> a = {5,10,15,8,6,12,9,18};
    nxt_grt(a);
}