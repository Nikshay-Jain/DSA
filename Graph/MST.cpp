#include<bits/stdc++.h>
using namespace std;

int prim_algo(vector<vector<int>> weight, int V) {
    vector<int> key(V,INT_MAX);
    key[0] = 0;
    vector<bool> mSet(V,false);
    int res = 0, u, i, count = 0;

    for(count=0; count<V; count++) {
        u = -1;
        for(i=0;i<V;i++) {
            if(!mSet[i] && (u==-1 || key[i]<key[u]))
                u=i;
        }
        mSet[u] = true;
        res += key[u];

        for(i=0; i<V; i++) {
            if(weight[u][i]!=0 && !mSet[i])
                key[i] = min(key[i], weight[u][i]);
        }
    }
    return res;
}

int main() {
    int V = 4;
    vector<vector<int>> weight = {{0,5,8,0},
                                  {5,0,10,15},
                                  {8,10,0,20},
                                  {0,15,20,0}};
    
    cout<<prim_algo(weight, V);
}