This program implements a basic Stack using a character array. A stack is a linear data structure that follows the LIFO (Last-In, First-Out) principle, meaning the last element added is the first one to be removed.

Key Logic:
Top Pointer: Keeps track of the latest element added. It starts at -1 (empty).
Push Operation: Increments top and adds the character to that index.
Pop/Display Logic: To simulate the stack behavior, the loop starts from top and moves down to 0.
Overflow Protection: Added a check to ensure we don't exceed the array limit of 10.

Complexity:
Push: O(1)
Pop (Access): O(1)
Space Complexity: O(n) based on array size.