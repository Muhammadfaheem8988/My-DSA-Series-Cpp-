/* * Task: Calculate Factorial of a number using Recursion
 * Focus: Understanding Base Case and Recursive Case
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

// Recursive function to find factorial
long long factorial(int n) {
    // Base Case: 0! or 1! is always 1
    if (n <= 1) {
        return 1;
    }
    // Recursive Case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}