This program demonstrates the Selection Sort algorithm. The algorithm works by repeatedly finding the maximum (or minimum) element from the unsorted part of the array and putting it at the beginning.

Key Logic:
	Scanning: The inner loop scans the unsorted part of the array to find the specific element (in this case, the largest).
	Tracking Location: The variable LOC keeps track of the index where the extreme value was found.
	Swapping: Once the scan is complete, a single swap is performed to put the found value in its correct "sorted" position.

Complexity:
	Time Complexity: O(n^2) for all cases (Best, Average, and Worst) because the two loops always run regardless of the initial order.
	Space Complexity: O(1) (In-place sorting).