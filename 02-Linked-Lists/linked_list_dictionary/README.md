This program implements a Dynamic Dictionary using a Singly Linked List. Each node represents a "word entry" that can store multiple meanings using a 2D array. 
It demonstrates how to manage complex string data and use the C-string library for comparisons.
Key Features:
Multi-Meaning Support: Every word node holds an array of meanings (up to 5), making it a many-to-one relationship.
String Comparison: Uses strcmp to traverse the list and find matching keywords.
Menu-Driven Interface: Uses a do-while loop and goto labels to provide a continuous user experience.
Heap Memory Management: Automatically deletes all nodes when the user exits to prevent memory leaks.
Technical Details:
Storage: char word[50] for the key and char meanings[5][100] for values.
Traversal: O(n) for both searching and displaying the full dictionary.