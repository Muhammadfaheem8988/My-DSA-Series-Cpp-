/* * Task: Graph Representation using Adjacency List
 * Focus: Space-efficient storage using an Array of Linked Lists
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

// Standard node for our linked list
struct node {
    int vertex;
    node* next;
};

class Graph {
private:
    int numVertices;
    node** adjLists; // Pointer to an array of pointers

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists = new node*[vertices];

        // Initialize all heads to NULL
        for (int i = 0; i < vertices; i++) {
            adjLists[i] = nullptr;
        }
    }

    // Adding an edge (Undirected)
    void addEdge(int src, int dest) {
        // Add edge from src to dest
        node* newNode = new node;
        newNode->vertex = dest;
        newNode->next = adjLists[src];
        adjLists[src] = newNode;

        // Add edge from dest to src (because it's undirected)
        newNode = new node;
        newNode->vertex = src;
        newNode->next = adjLists[dest];
        adjLists[dest] = newNode;
    }

    void display() {
        for (int i = 0; i < numVertices; i++) {
            node* temp = adjLists[i];
            cout << "Vertex " << i << " neighbors: ";
            while (temp) {
                cout << temp->vertex << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    // Destructor to clean up the heap
    ~Graph() {
        for (int i = 0; i < numVertices; i++) {
            node* temp = adjLists[i];
            while (temp) {
                node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }
        }
        delete[] adjLists;
    }
};

int main() {
    int v, e;
    cout << "Enter number of Vertices: "; cin >> v;
    cout << "Enter number of Edges: "; cin >> e;

    Graph g(v);

    for (int i = 0; i < e; i++) {
        int s, d;
        cout << "Enter edge " << i + 1 << " (Source Destination): ";
        cin >> s >> d;
        if (s < v && d < v) {
            g.addEdge(s, d);
        } else {
            cout << "Invalid Vertices!" << endl;
            i--;
        }
    }

    

    cout << "\n--- Adjacency List Representation ---" << endl;
    g.display();

    return 0;
}