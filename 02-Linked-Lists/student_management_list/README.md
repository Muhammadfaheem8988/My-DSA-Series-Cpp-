A comprehensive Student Management System implemented using a Singly Linked List. This program moves beyond basic data types by storing structures (struct) containing an integer ID, string Name, and float GPA. 
It covers the full lifecycle of data: creation, searching, deletion, and memory cleanup.
Key Logic:
Head & Tail Insertion: Efficiently adds records to the beginning or end of the list.
Targeted Deletion: Uses two pointers (ptr and prev) to find a specific ID and re-link the list to "bypass" the deleted node.
Input Safety: Uses cin.ignore() and getline() to handle student names that might contain spaces.
Memory Safety: Implements a full cleanup loop to ensure no memory leaks on the heap.
Complexity:
Insertion (First): O(1)
Insertion (Last): O(n)
Search/Delete: O(n)