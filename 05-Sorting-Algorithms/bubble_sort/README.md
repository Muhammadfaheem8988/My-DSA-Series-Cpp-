This program implements Bubble Sort, one of the simplest sorting algorithms. It works by repeatedly stepping through the list, comparing adjacent elements and swapping them if they are in the wrong order. 
This pass through the list is repeated until the list is sorted.

Key Logic:
	Neighbor Comparison: The algorithm specifically compares a[j] and a[j+1].
	Bubbling Effect: In each pass, the largest remaining element "bubbles up" to its correct position at the end of the array.
	Optimization: The inner loop condition 14 - i ensures that we don't re-check elements that are already sorted at the end of the array.

Complexity:
	Time Complexity: O(n^2) for average and worst cases.
	Space Complexity: O(1) (In-place sorting).