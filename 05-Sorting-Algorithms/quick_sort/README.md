This program implements Quick Sort, an highly efficient sorting algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

Key Logic:
	Pivot Selection: In this version, the last element is picked as the pivot.
	Partitioning: The array is reordered so that all elements with values less than the pivot come before it, and all elements with values greater than the pivot come after it.
	Recursion: The sub-arrays are then sorted recursively.

Complexity:
	Time Complexity: 
		O(n \log n) on average. 
		In the worst case (e.g., already sorted array with poor pivot choice), it can be O(n^2).
	Space Complexity: O(\log n) due to the recursive stack.