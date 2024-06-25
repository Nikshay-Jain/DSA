#include<bits/stdc++.h>
using namespace std;

void get_nos(vector<int> a, int n) {
    queue<int> q;
    int i, c, l=a.size();
    for(i=0;i<l;i++)
        q.push(a[i]);
    
    int curr;
    for(c=0;c<n;c++) {
        curr = q.front();
        cout<<curr<<" ";
        q.pop();

        // append new digits at the end to the no and push in queue
        for(i=0;i<l;i++)
            q.push((curr*10)+a[i]);
    }
}

int main() {
    int n = 10;
    vector<int> a = {5,6};
    get_nos(a,n);
}