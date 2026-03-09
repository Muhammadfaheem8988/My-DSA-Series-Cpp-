This program implements the Breadth-First Search (BFS) algorithm. BFS is a traversal strategy that explores all neighbor nodes at the present depth level before moving on to nodes at the next depth level.

Key Logic:
	The Queue: BFS uses a Queue (FIFO) to keep track of which nodes to visit next.
	Visited Array: A boolean array is essential to ensure we don't get stuck in an infinite loop if the graph has cycles.
	Level-Order: It visits nodes in the order: distance 0, distance 1, distance 2...

Complexity:
	Time Complexity: O(V + E) where V is vertices and E is edges.
	Space Complexity: O(V) for the visited array and the queue.