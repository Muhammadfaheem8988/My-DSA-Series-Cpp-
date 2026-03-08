/* * Task: Implementation of Selection Sort (Ascending Order)
 * Focus: Finding the minimum element and swapping it to the front
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main()
{
    int i, K, A[5], N = 5, TEMP, MIN, J, LOC;

    // Input loop
    for(i = 0; i < 5; i++)
    {
        cout << "Enter A[" << i << "] = ";
        cin >> A[i];
    }

    // Selection Sort Logic for Ascending Order
    for(K = 0; K < N - 1; K++)
    {
        MIN = A[K];
        LOC = K;

        // Finding the smallest element in the remaining unsorted part
        for(J = K + 1; J < N; J++)
        {
            if(A[J] < MIN) // Changed '>' to '<' for Ascending order
            {
                MIN = A[J];
                LOC = J;
            }
        }

        // Swapping the found minimum with the element at position K
        if(LOC != K) // Only swap if a smaller element was found
        {
            TEMP = A[K];
            A[K] = A[LOC];
            A[LOC] = TEMP;
        }
    }

    // Output sorted array
    cout << "\nAfter Sorting (Ascending):" << endl;
    for(K = 0; K < 5; K++)
    {
        cout << A[K] << " ";
    }
    cout << endl;

    return 0; 
}