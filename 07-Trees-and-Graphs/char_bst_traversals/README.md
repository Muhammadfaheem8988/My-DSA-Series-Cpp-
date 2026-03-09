This program explores Binary Search Tree (BST) traversals using character data. It demonstrates the three primary Depth-First Search (DFS) strategies: In-order, Pre-order, and Post-order. 
It also highlights how sequential insertion results in a skewed tree structure.

Key Logic:
	Character BST: Uses ASCII values to determine placement (A < B < C).
	In-order (LNR): Visits nodes in alphabetical order.
	Pre-order (NLR): Visits the root first, then children. Great for creating a copy of the tree.
	Post-order (LRN): Visits children first, then the root. Essential for safely deleting nodes from memory.

Complexity Note:
	Time: O(n) for traversals.
	Skewed Tree: Since characters were inserted in order ('A' through 'I'), the tree has a height of n, making search operations O(n) instead of O(\log n).