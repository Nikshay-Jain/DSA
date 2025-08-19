#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], vector<int> weight[], int wt, int u, int v) {
    adj[u].push_back(v);
    weight[u].push_back(wt);
}

int V = 6;              // no of vertices

void kahn_topological_sort(vector<int> adj[], vector<int> weight[], int s) {
        vector<int> in_degree(V, 0);
        queue<int> q;
        int i;

        // Calculate in-degree for each vertex
        for (i=0;i<V;i++) {
            for (int w : adj[i]) {
                in_degree[w]++;
            }
        }

        // Enqueue vertices with in-degree 0
        for (i=0;i<V;i++) {
            if (in_degree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topological_order;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            topological_order.push_back(u);

            for (int neighbor : adj[u]) {
                in_degree[neighbor]--;
                if (in_degree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        // Check if topological sorting is possible (graph should have no cycles)
        if (topological_order.size() == V) {
            // Compute shortest paths using dynamic programming
            vector<int> dist(V, INT_MAX);
            dist[topological_order[0]] = 0;

            for (int u : topological_order) {
                for (int i=0;i<adj[u].size();i++) {
                    int v = adj[u][i];
                    int wt = weight[u][i];
                    dist[v] = min(dist[v], dist[u]+wt);
                }
            }

            // Print the shortest distances
            cout << "Shortest distances from source (vertex 0):\n";
            for (i=0;i<V;i++)
                cout<<"Vertex "<<i<<": "<<dist[i]<<"\n";
        }
        else
            cout<<"Graph has at least one cycle\n";
    }

int main() {
    vector<int> adj[V];
    vector<int> weight[V];
    add_edge(adj,weight,2,0,1);
    add_edge(adj,weight,1,0,4);
    add_edge(adj,weight,3,1,2);
    add_edge(adj,weight,2,4,2);
    add_edge(adj,weight,4,4,5);
    add_edge(adj,weight,6,2,3);
    add_edge(adj,weight,1,5,3);
    
    kahn_topological_sort(adj, weight, 0);
}