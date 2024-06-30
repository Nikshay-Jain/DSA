#include<bits/stdc++.h>
using namespace std;

// Directed Acyclic Graph (DAG)
void add_edge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}

bool DFS_rec(vector<int> adj[], int s, vector<bool> &visited, vector<bool> &rec_st) {
    visited[s] = true;
    rec_st[s] = true;
    for(int v:adj[s]) {
        if(visited[v]==false && DFS_rec(adj,v,visited,rec_st))
            return true;
        else if(rec_st[v]==true)
            return true;
    }
    rec_st[s] = false;
    return false;
}

bool DFS(vector<int> adj[], int v) {
    vector<bool> visited(v,false), rec_st(v,false);
    int i;
    for(i=0;i<v;i++) {
        if(visited[i]==false) {
            if(DFS_rec(adj,i,visited,rec_st)==true)
                return true;
        }
    }
    return false;
}

int main() {
    int N = 6;              // no of vertices
    vector<int> adj[N];
    add_edge(adj,0,1);
    add_edge(adj,2,1);
    add_edge(adj,2,3);
    add_edge(adj,3,4);
    add_edge(adj,4,5);
    add_edge(adj,5,3);

    cout<<DFS(adj,N);
}