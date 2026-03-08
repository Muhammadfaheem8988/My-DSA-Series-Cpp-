/* * Task: Implementation of Selection Sort Algorithm
 * Focus: Finding the extreme element and swapping it into position
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

    // Selection Sort Logic
    for(K = 0; K < N - 1; K++)
    {
        MIN = A[K];
        LOC = K;

        // Finding the largest element in the remaining unsorted array
        for(J = K + 1; J < N; J++)
        {
            if(A[J] > MIN) // Current logic sorts in Descending Order
            {
                MIN = A[J];
                LOC = J;
            }
        }

        // Swapping the found maximum with the element at position K
        TEMP = A[K];
        A[K] = A[LOC];
        A[LOC] = TEMP;
    }

    // Output sorted array
    cout << "\nAfter Sorting (Descending):" << endl;
    for(K = 0; K < 5; K++)
    {
        cout << A[K] << " ";
    }
    cout << endl;

    return 0; 
}