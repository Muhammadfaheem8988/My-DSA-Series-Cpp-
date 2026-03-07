This program is a Dynamic Circular Queue. Instead of a fixed size, it asks the user for the capacity at the start and allocates memory on the heap using pointers. It effectively handles the "Wrap-around" logic to ensure maximum space utilization.
Key Features:Dynamic Allocation: Uses new int[size] to define queue capacity at runtime.
Efficient Reuse: When rear hits size - 1, it jumps back to 0 if space is available.
Memory Management: Includes delete[] to prevent memory leaks after the loop breaks.
Complexity: O(1) for Enqueue operations.