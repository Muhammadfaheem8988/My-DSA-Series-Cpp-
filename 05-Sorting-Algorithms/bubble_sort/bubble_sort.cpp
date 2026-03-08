/* * Task: Implementation of Bubble Sort Algorithm
 * Focus: Neighboring element comparison and "bubbling" logic
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std; 

int main()
{
    int i, j, t, a[15];

    // Input loop
    for(i = 0; i < 15; i++)
    {
        cout << "Enter number " << i + 1 << " = ";
        cin >> a[i];
    }

    // Bubble Sort Logic
    for(i = 0; i < 15; i++)
    {
        // Last i elements are already in place
        for(j = 0; j < (14 - i); j++)
        {
            // Compare adjacent elements
            if(a[j] > a[j + 1])
            {
                // Swap if they are in the wrong order
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    // Output sorted array
    cout << "\nAfter Sorting (Ascending Order):" << endl;
    for(i = 0; i < 15; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}