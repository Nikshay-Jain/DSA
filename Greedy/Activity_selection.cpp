#include<bits/stdc++.h>
using namespace std;

int mycmp(pair<int,int> a, pair<int,int> b) {
    return(a.second<b.second);
}

//Time: O(nlog(n))
int myact(pair<int,int> arr[], int n) {
    sort(arr,arr+n,mycmp);      //using personal comparator function to sort according to 2nd no in pair instead of default 1st
    int prev = 0, res = 1, curr;
    for(curr=1; curr<n;curr++) {
        if(arr[curr].first >= arr[prev].second) {    //check if start time of current activity is >= finish time of prev selected activity
            res++;
            prev=curr;
        }
    }
    return res;
}

int main() {
    int n = 3;
    pair<int, int> arr[3] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};
    cout<<"No of activities: "<<myact(arr,n);
}