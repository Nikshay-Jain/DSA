#include<bits/stdc++.h>
using namespace std;

void span(vector<int> a) {
    int i, n=a.size(), span;
    stack<int> s;
    s.push(0);
    cout<<"1 ";
    for(i=1;i<n;i++) {
        while(s.empty()==false && a[s.top()]<=a[i])    // based on finding prev greater element for array
            s.pop();
        
        span = s.empty() ? (i+1) : (i-s.top());

        cout<<span<<" ";
        s.push(i);
    }
}

int main() {
    vector<int> a = {30,20,25,28,27,29,31};
    span(a);
}