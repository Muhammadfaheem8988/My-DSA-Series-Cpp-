This program implements Merge Sort, a stable, comparison-based sorting algorithm. 
It works on the Divide and Conquer principle: it divides the unsorted list into n sub-lists (each containing one element) and then repeatedly merges sub-lists to produce new sorted sub-lists until only one sorted list remains.

Key Logic:
	Divide: The mergeSort function recursively splits the array in half until the base case (left < right) is no longer met.
	Conquer: The merge function takes two sorted "halves" and combines them into a single sorted section by comparing elements one by one.
	Memory Management: Uses dynamic arrays (new int[]) to hold temporary data during the merge process and ensures memory is freed using delete[].

Complexity:
	Time Complexity: O(n log n) for all cases (Best, Average, and Worst). This is significantly better than O(n^2) for large datasets.
	Space Complexity: O(n) due to the temporary arrays used for merging.