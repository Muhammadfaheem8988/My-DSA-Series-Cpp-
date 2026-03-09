This program demonstrates the Adjacency Matrix method for representing a graph. 
It uses a 2D array where the rows and columns represent vertices. A value of 1 at matrix[i][j] indicates an edge exists between vertex i and vertex j.

Key Logic:
	Symmetric Matrix: Because this is an Undirected Graph, if node A is connected to B, then B is also connected to A. Therefore, adjMatrix[u][v] and adjMatrix[v][u] are both set to 1.
	Constant Time Lookup: Checking if two nodes are connected is extremely fast (O(1)).
	Space Usage: Since it uses a 2D array, the space complexity is O(V^2), where V is the number of vertices.

Complexity:
	Edge Lookup: O(1)
	Adding Edge: O(1)
	Space: O(V^2)