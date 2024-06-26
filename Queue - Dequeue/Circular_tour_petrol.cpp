#include<bits/stdc++.h>
using namespace std;

// Time: O(n) and space: O(n)
int petrol_no1(vector<int> p, vector<int> d) {
    int curr_petrol = 0, i, n = p.size();
    deque<int> dq;

    for(i=0;i<n;i++) {
        curr_petrol += (p[i]-d[i]);
        
        if(curr_petrol<0) {
            while(curr_petrol<0 && dq.empty()==false) {
                curr_petrol -= (p[dq.front()] - d[dq.front()]);
                dq.pop_front();
            }
        }
        else
            dq.push_back(i);
    }
    return (dq.empty()==false ? dq.front() : -1);
}

// Time: O(n) and space: O(1)
int petrol_no2(vector<int> p, vector<int> d) {
    int start = 0, curr = 0, prev = 0, n = p.size(), i;
    for(i=0;i<n;i++) {
        curr += (p[i] - d[i]);

        if(curr < 0) {
            start = i+1;        // if this pump is not giving ans, we can start from the exact next one
            prev += curr;       // as all prev ones would also be the same
            curr = 0;
        }
    }
    return ((curr + prev)>=0 ? start : -1);
}

int main() {
    vector<int> petrol = {50,10,60,100}, dist = {30,20,100,10};
    cout<<petrol_no2(petrol,dist);
}