This program implements a Graph using an Adjacency List. Unlike the Matrix approach, this method only stores the actual connections that exist. 
It uses an array where each element is the head of a Linked List containing the neighbors of that vertex.

Key Logic:
	Dynamic Memory: Uses node** adjLists to create an array of pointers on the heap.
	Space Efficiency: The space complexity is O(V + E), making it much better than O(V^2) for graphs with few edges.
	Insertion: Adding an edge is O(1) because we simply insert at the head of the linked list for the corresponding vertex.

Complexity:
	Space: O(V + E)
	Add Edge: O(1)
	Find Neighbor: O(V) (in worst case)