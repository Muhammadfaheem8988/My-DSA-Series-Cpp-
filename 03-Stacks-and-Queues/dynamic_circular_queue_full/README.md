This program is a complete Dynamic Circular Queue supporting both insertion (Enqueue) and deletion (Dequeue). It uses a pointer-based array to manage memory dynamically based on user requirements.

Key Logic:

Enqueue: Adds elements and wraps the rear pointer to the start of the array if space exists.

Dequeue: Removes elements from the front. If the queue becomes empty after a deletion, both front and rear are reset to -1.

Wrap-around: Both front and rear pointers support circular movement to prevent memory wastage.

Memory Management: Heap memory is allocated with new and freed with delete[].

Menu System: Added a simple choice-based system so you can test both operations in one run.

Underflow Protection: Added a check for front == -1 to prevent deleting from an empty queue.

Reset Logic: When front == rear, it means the queue is now empty, so we reset the pointers to their initial state.
