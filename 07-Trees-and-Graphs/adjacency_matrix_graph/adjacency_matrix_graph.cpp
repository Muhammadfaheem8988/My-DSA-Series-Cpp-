/* * Task: Graph Representation using Adjacency Matrix
 * Focus: 2D Array mapping for vertex connections
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

int main() 
{
    int vertices, edges;
    
    cout << "Enter the number of Vertices (Nodes): "; 
    cin >> vertices;
    cout << "Enter the number of Edges (Connections): "; 
    cin >> edges;

    // Creating a 2D array (Matrix) and initializing with 0
    int adjMatrix[10][10] = {0}; 

    // Data Entry for connections
    for (int i = 0; i < edges; i++) 
    {
        int u, v;
        cout << "Enter edge " << i + 1 << " (Source and Destination): ";
        cin >> u >> v;

        // For an Undirected Graph, we mark both directions
        if (u < vertices && v < vertices) 
        {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        } 
        else 
        {
            cout << "Invalid Vertex! Try again." << endl;
            i--; // Repeat this turn
        }
    }

    

    // Displaying the Matrix
    cout << "\n--- Adjacency Matrix Representation ---" << endl;
    cout << "   ";
    for (int i = 0; i < vertices; i++) cout << i << " ";
    cout << endl;

    for (int i = 0; i < vertices; i++) 
    {
        cout << i << ": ";
        for (int j = 0; j < vertices; j++) 
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}