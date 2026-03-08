This program completes the Linear Queue implementation by adding Dequeue (removal) functionality. 
It demonstrates how the front pointer moves forward as items are processed, following the FIFO rule.

Key Logic:
	Enqueue: Elements are added at the rear index until it reaches the array limit (10).
	Dequeue: Elements are removed from the front index.
	Pointer Reset: A crucial piece of logic is included where if front == rear, the pointers are reset to 0. This allows the array to be reused once the queue is fully cleared.
	Underflow/Overflow: Prevents errors by checking the relationship between pointers and array boundaries.

Complexity:
	Time Complexity: O(1) for both Enqueue and Dequeue.
	Space Complexity: O(n) where n=10.