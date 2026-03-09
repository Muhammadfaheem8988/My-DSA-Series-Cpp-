This program implements a Binary Search Tree (BST). A BST is a node-based binary tree data structure which has the following properties:
* The left subtree of a node contains only nodes with keys lesser than the node’s key.
* The right subtree of a node contains only nodes with keys greater than the node’s key.
* The left and right subtree each must also be a binary search tree.

Key Logic:
	Recursive Insertion: The algorithm decides whether to go left or right based on a comparison with the current node's data.
	In-Order Traversal: By visiting the Left child, then the Node, then the Right child, the BST naturally outputs the data in sorted ascending order.
	Memory Management: A recursive deleteTree function ensures that every node allocated on the heap is properly freed, starting from the leaves up to the root.

Complexity:
	Search/Insert (Average): O(\log n)
	Search/Insert (Worst - Skewed Tree): O(n)
	Space Complexity: O(n)