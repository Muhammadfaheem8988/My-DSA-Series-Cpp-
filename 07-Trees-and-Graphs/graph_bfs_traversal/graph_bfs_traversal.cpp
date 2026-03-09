/* * Task: Breadth-First Search (BFS) Traversal on a Graph
 * Focus: Level-order exploration using a Queue
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <queue> // Using STL queue for clarity, or use your custom Linked Queue!
using namespace std;

class Graph {
private:
    int vertices;
    int adjMatrix[10][10]; // Using Matrix style for simplicity in traversal

public:
    Graph(int v) {
        vertices = v;
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1; // Undirected
    }

    void BFS(int startVertex) {
        bool visited[10] = {false};
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "BFS Traversal starting from vertex " << startVertex << ": ";

        while (!q.empty()) {
            int curr = q.front();
            cout << curr << " ";
            q.pop();

            // Check all neighbors of the current vertex
            for (int i = 0; i < vertices; i++) {
                if (adjMatrix[curr][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int v = 5;
    Graph g(v);

    // Creating a sample graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    

    g.BFS(0);

    return 0;
}