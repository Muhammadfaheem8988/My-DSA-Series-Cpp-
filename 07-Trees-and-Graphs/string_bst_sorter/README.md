This program implements a String-based Binary Search Tree. It serves as an efficient tool for sorting and storing text-based data. 
By inserting a list of unsorted words and performing an In-order traversal, the program outputs the words in perfect dictionary order.

Key Logic:
	Lexicographical Comparison: C++ strings support the < operator, which compares characters one by one based on their ASCII values.
	Efficient Sorting: Unlike array-based sorting (O(n^2) for simple sorts), a BST can sort strings in O(n log n) on average.
	Array-to-Tree Migration: The main function demonstrates how to iterate through a static array and dynamically build a tree structure.

Complexity:
	Time: Average O(n log n) to build the tree; O(n) to display.
	Space: O(n X string length) for the dynamic nodes.