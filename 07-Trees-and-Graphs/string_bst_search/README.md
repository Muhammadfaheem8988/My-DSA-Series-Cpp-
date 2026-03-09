This program demonstrates the Search operation in a Binary Search Tree (BST) using strings. 
Searching in a BST is highly efficient because it follows a directed path from the root to the target, ignoring half of the remaining tree at each step.

Key Logic:
	Recursive Search: The function compares the key with the current root->data.
	Decision Making:
		* If key == data, the search is successful.
		* If key < data, it recursively moves to the Left child.
		* If key > data, it recursively moves to the Right child.
	Termination: The search ends when the word is found or a nullptr (leaf end) is reached.

Complexity:
	Time Complexity (Average): O(\log n) — For a tree with 1,000 words, it only takes about 10 comparisons!
	Time Complexity (Worst): O(n) — If the tree is skewed (like a linked list).