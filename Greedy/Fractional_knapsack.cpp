#include<bits/stdc++.h>
using namespace std;

int mycmp(pair<int,int> a, pair<int,int> b) {
    return ((double)a.first/a.second > (double)b.first/b.second);
}

int fknap(vector<pair<int,int>> arr, int w) {
    sort(arr.begin(),arr.end(),mycmp);
    double res = 0.0;
    int i=0, n = arr.size();
    while(w>=0 && i<n) {
        if(w>=arr[i].second) {
            res+=arr[i].first;
            w-=arr[i].second;
        }
        else {
            res+=((arr[i].first)*((double)w/arr[i].second));
            break;
        }
        i++;
    }
    return res;
}

int main() {
    vector<pair<int, int>> arr = {make_pair(120, 30), make_pair(100, 20), make_pair(60, 10)};
    int w = 50;
    cout<<"Max profit: "<<fknap(arr,w);
}