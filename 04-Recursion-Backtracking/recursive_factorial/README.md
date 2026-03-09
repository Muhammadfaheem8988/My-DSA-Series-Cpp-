This program calculates the factorial of a given number using the Recursive Approach. It demonstrates the fundamental principle of recursion: breaking a problem down into a base case and a recursive case.

Key Logic:
	Base Case: The recursion stops when  $n \leq 1$, returning 1.
	Recursive Case: The function calls itself with $n-1$, following the mathematical formula $n! = n \times (n-1)!$.
	Data Type: Uses long long to handle larger results as factorial values grow rapidly.

Complexity:
	Time Complexity: O(n) — The function is called n times.
	Space Complexity: O(n) — Due to the overhead of the recursive function call stack.