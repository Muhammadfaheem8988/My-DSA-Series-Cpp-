This program implements a Bounded Linked Queue. It uses the dynamic nature of a Linked List but enforces a size limit (maxSize) typically found in array-based implementations. 
This provides a balance between efficient memory usage and resource control.

Key Logic:
	Dynamic Nodes: Each element is a node on the heap, allowing the queue to use memory only when needed.
	FIFO Management: Maintains a front pointer for removals and a rear pointer for additions.
	Size Control: A currentCount variable ensures the queue does not exceed the user-defined maxSize.
	Memory Management: Explicitly uses delete during the Dequeue operation to prevent memory leaks.

Complexity:
	Enqueue/Dequeue: O(1) (Constant time)
	Space: O(n) where n is the number of active elements.