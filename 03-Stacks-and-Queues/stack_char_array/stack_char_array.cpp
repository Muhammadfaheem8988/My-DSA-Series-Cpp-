/* * Task: Character Stack Implementation using Array
 * Focus: LIFO (Last-In, First-Out) logic and Top pointer management
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

int main()
{
    int top = -1, i;
    char stack[10]; // Creating a stack for 10 characters
    char data, ans;

    ans = 'y';
    // Data entry controlled by user input
    while (ans == 'y' || ans == 'Y') 
    {
        // Check for Overflow before adding
        if (top == 9) 
        {
            cout << "\nStack Overflow! Cannot add more items." << endl;
            break;
        }

        cout << "\nEnter character for stack: ";
        cin >> data;
        
        top++; // Increase top by 1
        stack[top] = data;

        cout << "Do you want more items? (y/n): ";
        cin >> ans;
    } 

    // Displaying items using LIFO principle (Last-In, First-Out)
    cout << "\n--- Popping items from Stack ---" << endl;
    for (i = top; i >= 0; i--)
    {
        cout << "The value Popped is: " << stack[i] << endl;
    }

    if (top == -1) {
        cout << "Stack is empty." << endl;
    }

    return 0;
}