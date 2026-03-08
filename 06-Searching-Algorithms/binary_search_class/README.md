This program implements the Binary Search algorithm. Unlike Linear Search, Binary Search is significantly faster for large datasets because it halves the search area with every comparison. 
Requirement: The array must be sorted in ascending order for the logic to work.

Key Logic:
	Divide and Conquer: The search constantly finds the mid index.
	Range Reduction: 
	* If key > elements[mid], the search continues in the upper half (low = mid + 1).
	* If key < elements[mid], the search continues in the lower half (high = mid - 1).
	OOP Design: Keeps the data and search behavior encapsulated in a single class.

Complexity:
	Time Complexity: O(\log n) (Very efficient for large data).
	Space Complexity: O(1) (Constant space).