#include<bits/stdc++.h>
using namespace std;

int mycmp(pair<int,int> a, pair<int,int> b) {
    return (a.second > b.second);
}

int job(vector<pair<int,int>> arr) {
    int i, summ = 0, maxDeadline = 0, sum=0, n=arr.size();
    for (i=0;i<n;i++)
        maxDeadline = max(maxDeadline, arr[i].first);
    
    int res[maxDeadline];           
    for(i=0;i<maxDeadline;i++)
        res[i] = 0;
    
    sort(arr.begin(),arr.end(),mycmp);

    for(i=0;i<n;i++) {
        if(res[arr[i].first-1] == 0) {
            res[arr[i].first-1] = arr[i].second;
            summ+=arr[i].second;
        }
    }
    return summ;
}

int main() {
    vector<pair<int,int>> arr = {make_pair(4,50), make_pair(1,5), make_pair(1,20), make_pair(5,10), make_pair(5,80)};
    cout<<"Max profit: "<<job(arr)<<endl;
}