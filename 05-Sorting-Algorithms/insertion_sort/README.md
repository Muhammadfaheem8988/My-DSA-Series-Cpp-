This program demonstrates Insertion Sort, a simple and efficient sorting algorithm for small datasets. It builds the final sorted array one item at a time by taking an element from the unsorted part and inserting it into its correct position within the already sorted part.

Key Logic:
	The "Key" Concept: The algorithm picks the current element (key) and compares it with the elements before it.
	Shifting: If the element before the key is larger, it shifts that element to the right to make space.
	Insertion: Once the correct spot is found (where A[i] <= key), the key is dropped in.
Complexity:
	Time Complexity: 
		O(n^2) for average and worst cases; 
		O(n) for best case (already sorted).
	Space Complexity: O(1) (In-place sorting).