#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited); 
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> graph(V);
    
    graph[0] = {1, 2}; 
    graph[1] = {0, 3};
    graph[2] = {0, 4}; 
    graph[3] = {1};  
    graph[4] = {2}; 

    vector<bool> visited(V, false);

    cout << "DFS Traversal starting from node 0: ";
    dfs(0, graph, visited);
    return 0;
}

