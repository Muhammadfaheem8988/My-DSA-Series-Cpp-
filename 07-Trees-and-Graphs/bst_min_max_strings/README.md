This program identifies the Minimum and Maximum elements in a Binary Search Tree. 
Because a BST is ordered, the smallest value is always the leftmost node, and the largest value is always the rightmost node.

Key Logic:
	Min Logic: Traverses the left pointers recursively. The first node encountered with left == nullptr is the minimum.
	Max Logic: Traverses the right pointers recursively. The first node encountered with right == nullptr is the maximum.
	Efficiency: This avoids a full tree traversal (O(n)) and instead runs in O(h) time, where h is the height of the tree.

Complexity:
	Time Complexity (Average): O(log n)
	Time Complexity (Worst): O(n) (If the tree is skewed).
	Space Complexity: O(h) due to the recursive call stack.