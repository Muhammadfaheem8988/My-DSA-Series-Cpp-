/* * Task: Depth-First Search (DFS) Traversal on a Graph
 * Focus: Recursive exploration (maze-running logic)
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

class Graph {
private:
    int vertices;
    int adjMatrix[10][10];
    bool visited[10]; // Tracking visited nodes globally within the class

public:
    Graph(int v) {
        vertices = v;
        for (int i = 0; i < v; i++) {
            visited[i] = false;
            for (int j = 0; j < v; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1; // Undirected
    }

    // Recursive DFS Helper
    void DFS(int startVertex) {
        // 1. Mark the current node as visited
        visited[startVertex] = true;
        cout << startVertex << " ";

        // 2. Visit all unvisited neighbors recursively
        for (int i = 0; i < vertices; i++) {
            if (adjMatrix[startVertex][i] == 1 && !visited[i]) {
                DFS(i);
            }
        }
    }
};

int main() {
    int v = 5;
    Graph g(v);

    // Creating the same sample graph as BFS for comparison
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    

    cout << "DFS Traversal starting from vertex 0: ";
    g.DFS(0);
    cout << endl;

    return 0;
}