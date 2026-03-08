This program is an Unbounded Dynamic Linked Queue. Unlike the bounded version, it does not enforce a maximum size, allowing the structure to scale based on available system memory. 
It serves as a classic example of the FIFO (First-In, First-Out) principle using dynamic node allocation.

Key Features:
	Unbounded Growth: No maxSize variable; the queue grows as long as memory can be allocated.
	Simplified Logic: Focuses purely on the relationship between front and rear pointers.
	Pointer Safety: Specifically handles the edge case where the queue becomes empty, ensuring the rear pointer is properly reset to NULL.
	Parameter Passing: The enqueue(int val) function takes the data as an argument, separating the user interface from the core data logic.

Complexity:
	Enqueue/Dequeue: O(1) (Constant time)
	Space: O(n) where n is the number of elements currently in the queue.