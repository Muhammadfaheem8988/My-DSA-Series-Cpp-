This program implements a Linked Stack using C++ Classes. By using a linked list instead of an array, this stack is dynamic, though it still respects a maxsize constraint as defined by the user. 
It demonstrates Encapsulation, where the stack pointers and size are hidden from the main function.
Key Logic:
	Push (O(1)): A new node is created and pointed to the current top. The top pointer is then updated to this new node.
	Pop (O(1)): The data from the top node is retrieved, the top pointer moves to the next node, and the old node is deleted from memory.
	Encapsulation: All pointer manipulation happens inside the stack class, keeping the main function clean and logic-focused.
	Memory Management: Includes a Destructor (~stack) to ensure all nodes are deleted when the program ends.

Complexity:
	Push/Pop: O(1)
	Display: O(n)