/* * Task: Implementation of Insertion Sort Algorithm
 * Focus: Stable sorting by shifting elements to their correct position
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main()
{
    int i, j, key;
    int A[5]; // Array of 5 elements

    // Input loop
    for(i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": "; 
        cin >> A[i];
    }

    // Insertion Sort Logic
    for(j = 1; j < 5; j++)
    {
        key = A[j]; // The current element to be inserted
        i = j - 1;

        // Shift elements of A[0..j-1] that are greater than key
        // to one position ahead of their current position
        while(i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key; // Place the key in its correct spot
    }

    // Output sorted array
    cout << "\nAfter Sorting (Ascending):" << endl;
    for(i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}