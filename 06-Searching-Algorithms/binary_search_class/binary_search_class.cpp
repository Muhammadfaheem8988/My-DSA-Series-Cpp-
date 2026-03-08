/* * Task: Binary Search Implementation using OOP
 * Focus: Divide and Conquer searching (Logarithmic time)
 * Note: Input must be sorted for this algorithm to function
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

class BinarySearch 
{
private:
    int currentSize;
    int elements[10]; // Maximum capacity of 10

public:
    void getElements()
    {
        cout << "Enter the number of elements (max 10): ";
        cin >> currentSize;
        
        if(currentSize > 10) currentSize = 10;

        cout << "Please enter elements in SORTED order:" << endl;
        for(int i = 0; i < currentSize; i++)
        {
            cout << "Enter " << i + 1 << " Element: ";
            cin >> elements[i];
        }
    }

    int search(int key) 
    {
        int low = 0;
        int high = currentSize - 1;

        while (low <= high) 
        {	
            int mid = (low + high) / 2;

            // Check if key is at mid
            if (elements[mid] == key) {
                return mid;
            }

            // If key is greater, ignore left half
            if (elements[mid] < key) 
            {
                low = mid + 1;
            }
            // If key is smaller, ignore right half
            else 
            {
                high = mid - 1;
            }
        }
        return -1; // Not found
    }
};

int main() 
{
    BinarySearch obj;
    obj.getElements();

    int key;
    cout << "\nEnter the element to search for: ";
    cin >> key;

    int result = obj.search(key);

    if (result != -1) 
    {
        cout << "Result: Element " << key << " found at index " << result << "." << endl;
    } 
    else 
    {
        cout << "Result: Element " << key << " not found in the list." << endl;
    }

    return 0;
}