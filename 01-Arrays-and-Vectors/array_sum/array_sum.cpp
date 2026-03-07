/* * Task: Calculate the sum of elements in an array
 * Focus: Array initialization and traversal
 * Author: Muhammad Faheem
 */

#include <iostream> 
using namespace std; 

int main() 
{
    // Initializing array to 0 to avoid garbage values
    int i, n, s = 0, array[10] = {0}; 
    
    cout << "Enter the number of elements (max 10): " << endl; 
    cin >> n;
    
    // Safety check for array bounds
    if (n > 10) n = 10;

    cout << "Enter elements:" << endl; 
    for(i = 0; i < n; i++) 
    { 
        cin >> array[i]; 
        s = s + array[i]; 
    } 
    
    cout << "Sum of array elements: " << s << endl;   
    
    return 0; 
} 