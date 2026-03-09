This program implements a Hash Table with Separate Chaining for collision resolution. A hash table maps keys to specific indices in an array using a hash function, allowing for extremely fast data retrieval.

Key Concepts:
	Hash Function: Converts a string key into an integer index using the formula: $Index = (\sum ASCII) \pmod{TableSize}$.
	Collision Handling: When two different keys (e.g., "abc" and "cba") result in the same index, they are stored in a Linked List at that index (Chaining).
	Load Management: This implementation allows for updating values if a key is inserted twice.
	CRUD Operations: Supports Insertion, Search (Find), and Removal.

Complexity:
	Average Case: O(1) for Search, Insert, and Delete.
	Worst Case: O(n) (If all keys collide and end up in a single chain).