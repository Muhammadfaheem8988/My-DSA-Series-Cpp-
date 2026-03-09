This program implements the Deletion operation for a Binary Search Tree. Deletion is a complex recursive process that requires re-linking pointers to ensure the tree remains a valid BST.

Key Logic:
	Search Phase: Recursively traverse left or right to find the target key.
	Deletion Phase:
	* Leaf/Single Child: Return the non-null child (or null) to the parent's pointer.
	* Two Children: This is the "Swap and Delete" strategy. We find the In-order Successor (minimum of the right subtree), replace the target node's data with it, and then delete the successor node.
	Successor Logic: Using the findMinNode helper ensures we always pick the smallest possible value that is still greater than the current node.

Complexity:
	Time Complexity: O(h) where h is the height of the tree (O(log n) average).
	Space Complexity: O(h) for the recursion stack.