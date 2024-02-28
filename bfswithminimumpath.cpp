#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;

void addEdge(int x, int y) {
    adj[x][y] = 1;
    adj[y][x] = 1;
}

void bfs(int start) {
    vector<bool> visited(adj.size(), false);
    vector<int> distance(adj.size(), INT_MAX); // Store distance from start to each vertex
    vector<int> parent(adj.size(), -1); // Store parent of each vertex in the shortest path
    queue<int> q;

    q.push(start);
    visited[start] = true;
    distance[start] = 0; // Distance of start vertex to itself is 0

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int i = 0; i < adj[current].size(); i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
                distance[i] = distance[current] + 1; // Update distance
                parent[i] = current; // Update parent
            }
        }
    }

    // Output minimum path to each vertex
    cout << "\nMinimum path from start vertex to each vertex:\n";
    for (int i = 0; i < adj.size(); i++) {
        cout << "Vertex " << i << ": " << distance[i] << " units\n";
    }

    // Output visited minimum path
    cout << "\nVisited minimum path:\n";
    for (int i = 0; i < adj.size(); i++) {
        int current = i;
        cout << "Path to vertex " << current << ": ";
        while (current != start) {
            cout << current << " <- ";
            current = parent[current];
        }
        cout << start << "\n";
    }
}

int main() {
    int v = 5; // Number of vertices
    adj = vector<vector<int>>(v, vector<int>(v, 0));

    // Example: Adding edges
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 4);
    addEdge(2,1);
    addEdge(2,3);
    addEdge(4,3);

    cout << "BFS traversal:\n";
    bfs(0);

    return 0;
}
