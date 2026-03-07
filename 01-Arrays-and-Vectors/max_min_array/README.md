This program traverses a static array to identify the Maximum and Minimum values. It demonstrates a single-pass approach (O(n)) to extract key statistics from a dataset.
Key Logic:
Initialization: Both max and min are set to array[0] initially to ensure the comparison is grounded in the actual data values.
Conditional Comparison: Uses if statements within a for loop to update the "current champion" for both largest and smallest.
Efficiency: Only requires one full pass through the array, making it highly efficient.
Complexity:
Time Complexity: O(n)
Space Complexity: O(1)