/* * Task: Find the Largest and Smallest element in an array
 * Focus: Array traversal and conditional logic
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

int main() 
{
    int i, n, max, min, array[10] = {0};

    cout << "Enter the number of elements (max 10): ";
    cin >> n;

    // Boundary check
    if (n > 10) n = 10;

    cout << "Enter elements:" << endl;
    for(i = 0; i < n; i++) 
    {
        cin >> array[i];
    }

    // Initialize max and min with the first element
    max = array[0];
    min = array[0];

    // Traverse the array to compare values
    for(i = 1; i < n; i++) 
    {
        if(array[i] > max) 
        {
            max = array[i];
        }
        
        if(array[i] < min) 
        {
            min = array[i];
        }
    }

    cout << "Largest Element: " << max << endl;
    cout << "Smallest Element: " << min << endl;

    return 0;
}