This program implements Selection Sort to arrange an array in Ascending Order. The algorithm maintains two subarrays: one which is already sorted and one which is unsorted. In every iteration, the minimum element from the unsorted subarray is picked and moved to the sorted subarray.

Key Logic:
	Minimum Finding: The inner loop traverses the unsorted section to locate the smallest value.
	Efficient Swapping: Unlike Bubble Sort which swaps multiple times per pass, Selection Sort performs only one swap per outer loop iteration.
	Ascending Condition: The check if(A[J] < MIN) ensures we are always hunting for the next smallest number to fill the current index K.

Complexity:
	Time Complexity: O(n^2) (The comparisons happen regardless of the data's initial order).
	Space Complexity: O(1) (No extra memory is required).