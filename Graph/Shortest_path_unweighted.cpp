#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}

// Using BFS algo
void shortest(vector<int> adj[], int N, int s) {
    vector<int> dist(N,0);
    dist[s] = 0;
    vector<bool> visited(N,false);
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(q.empty()==false) {
        int u = q.front();
        q.pop();
        for(int v:adj[u]) {
            if(visited[v]==false) {
                dist[v] = dist[u] + 1;      // add 1 in dist as every level is traversed
                visited[v] = true;
                q.push(v);
            }
        }
    }
    int i;
    for(i=0;i<N;i++)
        cout<<dist[i]<<" ";
}

int main() {
    int N = 6;              // no of vertices
    vector<int> adj[N], dist;
    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,0,4);
    add_edge(adj,1,3);
    add_edge(adj,2,3);
    add_edge(adj,3,5);
    add_edge(adj,4,5);
    
    shortest(adj, N, 0);
}