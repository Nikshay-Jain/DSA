#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<int> adj[], int s, vector<bool> &visited) {
    visited[s] = true;
    cout<<s<<" ";
    for(int v:adj[s]) {
        if(visited[v]==false)
            DFS(adj,v,visited);
    }
}

int DFS_dis(vector<int> adj[], int v) {
    vector<bool> visited(v,false);
    int i,count = 0;
    for(i=0;i<v;i++) {
        if(visited[i]==false) {
            DFS(adj,i,visited);
            count++;
        }
    }
    return count;
}

int main() {
    int N = 7;              // no of vertices
    vector<int> adj[N];
    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,1,3);
    add_edge(adj,2,3);

    add_edge(adj,4,5);
    add_edge(adj,5,6);
    add_edge(adj,6,4);
    int c = DFS_dis(adj,N);
    cout<<"\nNo of connected islands: "<<c;
}