This program implements a Circular Queue using a static array of size 3. Unlike a standard queue, a circular queue connects the last position back to the first, ensuring that empty slots created by dequeuing can be reused.
Key Logic:Overflow Condition: Checked by seeing if rear is right behind front or if the entire array is filled from 0 to max.
Wrap-around: When rear reaches the last index, it resets to 0 instead of stopping, provided there is space.
Complexity: Time complexity for Enqueue is O(1).