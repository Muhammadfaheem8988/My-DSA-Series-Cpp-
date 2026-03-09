/* * Task: Generate Fibonacci sequence using Recursion
 * Focus: Multiple recursive calls and sequence generation
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base Case: first two terms are 0 and 1
    if (n <= 1) {
        return n;
    }
    // Recursive Case: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int count;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> count;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < count; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}