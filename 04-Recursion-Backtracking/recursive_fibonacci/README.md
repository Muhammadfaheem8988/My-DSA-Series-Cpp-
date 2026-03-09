This program generates the Fibonacci Series using recursion. Each number in the sequence is the sum of the two preceding ones, starting from 0 and 1.

Key Logic:
	Base Case: If $n$ is 0 or 1, the function returns $n$.
	Multiple Recursion: The function branches into two calls: fib(n-1) + fib(n-2).
	Sequence Generation: A loop in main calls the recursive function for each index to print the full series.

Complexity:
	Time Complexity: $O(2^n)$ — The number of calls doubles at each level, making it highly inefficient for large $n$.
	Space Complexity: $O(n)$ — The maximum depth of the recursion tree.