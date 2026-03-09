/* * Task: Solve N-Queens Problem using Backtracking
 * Focus: Trial and error (Backtracking) and safety validation
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <vector>

using namespace std;

#define N 4 // You can change this to 8 for a full board

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << (board[i][j] ? " Q " : " . ");
        }
        cout << endl;
    }
    cout << endl;
}

// Check if it's safe to place a queen at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i]) return false;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j]) return false;

    return true;
}

// Recursive function to solve N-Queens
bool solveNQUtil(int board[N][N], int col) {
    // Base Case: If all queens are placed
    if (col >= N) return true;

    // Try placing queen in all rows of this column
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1; // Make choice

            // Recur to place rest of the queens
            if (solveNQUtil(board, col + 1)) return true;

            // BACKTRACK: If placing queen here doesn't lead to a solution
            board[i][col] = 0; 
        }
    }
    return false;
}

int main() {
    int board[N][N] = {0};

    if (solveNQUtil(board, 0) == false) {
        cout << "Solution does not exist" << endl;
    } else {
        cout << "N-Queens Solution (4x4):" << endl;
        printBoard(board);
    }

    return 0;
}