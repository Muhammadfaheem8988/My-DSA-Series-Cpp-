This program implements a Doubly Linked List (DLL). Unlike a singly linked list, each node in a DLL contains an extra pointer called prev, which points to the preceding node. 
This allows for bidirectional traversal and more flexible node deletion.

Key Logic:
Bidirectional Linking: When adding a node, new_node->prev = temp ensures the backward link is established.
Forward Traversal: Standard O(n) traversal using the next pointer.
Backward Traversal: Starts from the tail and moves to the head using the prev pointer, proving the structure is correct.
Memory Management: Iterates through the list to delete each node and prevent heap memory leaks.