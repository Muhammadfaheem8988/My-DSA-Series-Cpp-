This program solves the N-Queens Problem, a classic puzzle of placing $N$ chess queens on an $N \times N$ chessboard so that no two queens threaten each other. 
It is a primary example of the Backtracking algorithmic technique.

Key Logic:
	Safety Check: A isSafe function ensures no queen is placed in the same row, upper diagonal, or lower diagonal as another queen.
	Trial and Error: The algorithm tries placing a queen in a row; if it leads to a solution, it continues. If not, it "undoes" the move (Backtracks).State Reset: board[i][col] = 0 is used to reset the cell when a path fails, allowing the search to explore other possibilities.

Complexity:
	Time Complexity: $O(N!)$ — The algorithm explores permutations of queen placements.
	Space Complexity: $O(N^2)$ — For the chessboard representation.