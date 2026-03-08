This program demonstrates a Linear Queue implemented with a static character array. 
A queue is a fundamental data structure that follows the FIFO (First-In, First-Out) principle—meaning the first element added is the first one to be processed (like a real-world waiting line).

Key Logic:
	Front & Rear: Two pointers manage the data. rear is where we add (Enqueue), and front is where we would remove (Dequeue).
	Initialization: The array is pre-filled with spaces to ensure a clean memory state.
	Traversal: Unlike a stack, we move forward through the indices to maintain the insertion order.

Complexity:
	Enqueue (Add): O(1)
	Access/Display: O(n)
	Space: Fixed O(10) in this implementation