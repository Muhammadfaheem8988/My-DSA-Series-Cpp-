This program is an Unbounded Linked Stack. Unlike the previous version which had a fixed capacity, this implementation is truly dynamic. 
It demonstrates how to create a stack that grows according to the runtime needs of the application.

Key Differences & Improvements:
	No Overflow: Removed the maxsize check, allowing the stack to grow indefinitely (limited only by system memory).
	Decoupled Logic: The push(int a) function now accepts a parameter. This is a better practice because it separates the Input (Main) from the Logic (Class).
	Simplified State: Since we don't care about the maximum size, we removed the size and maxsize variables, making the class more lightweight.

Complexity:
	Push/Pop: Always O(1).
	Memory: Allocates exactly what is needed for each node (O(n)).