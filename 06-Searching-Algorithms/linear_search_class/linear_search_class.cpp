/* * Task: Linear Search Implementation using OOP
 * Focus: Sequential searching and element indexing
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

class LinearSearch {
private:
    int elements[10]; // Static array with a max capacity
    int currentSize;

public:
    // Initializing the size and getting elements
    void getElements()
    {
        cout << "How many elements do you want to enter (max 10)? ";
        cin >> currentSize;

        if(currentSize > 10) currentSize = 10;

        for(int i = 0; i < currentSize; i++)
        {
            cout << "Enter " << i + 1 << " Element: ";
            cin >> elements[i];
        }
    }

    // Standard Linear Search logic
    int search(int key) 
    {
        for (int i = 0; i < currentSize; i++) 
        {
            if (elements[i] == key) 
            {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }
};

int main() 
{
    LinearSearch obj;
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