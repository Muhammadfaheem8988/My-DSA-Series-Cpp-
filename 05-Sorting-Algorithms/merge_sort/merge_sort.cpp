/* * Task: Implementation of Merge Sort (Divide and Conquer)
 * Focus: Recursive splitting and efficient merging of subarrays
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

// Function to merge two sorted subarrays into one
void merge(int numbers[], int left, int mid, int right) 
{
    int sizeLeft = mid - left + 1;
    int sizeRight = right - mid;    

    // Creating temporary dynamic arrays
    int* leftArray = new int[sizeLeft];
    int* rightArray = new int[sizeRight];

    // Copying data to temp arrays
    for (int i = 0; i < sizeLeft; i++) 
    {
        leftArray[i] = numbers[left + i];
    }
    for (int j = 0; j < sizeRight; j++) 
    {
        rightArray[j] = numbers[mid + 1 + j];
    }

    // Merging the temp arrays back into the original array
    int i = 0, j = 0, k = left;
    while (i < sizeLeft && j < sizeRight) 
    {
        if (leftArray[i] <= rightArray[j]) 
        {
            numbers[k] = leftArray[i];
            i++;
        } else 
        {
            numbers[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copying any remaining elements
    while (i < sizeLeft) 
    {
        numbers[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < sizeRight) {
        numbers[k] = rightArray[j];
        j++;
        k++;
    }

    // Freeing dynamic memory to prevent leaks
    delete[] leftArray;
    delete[] rightArray;
}

// Recursive function to divide the array
void mergeSort(int numbers[], int left, int right) 
{
    if (left < right) {
        int mid = left + (right - left) / 2; 

        // Sort first and second halves
        mergeSort(numbers, left, mid);
        mergeSort(numbers, mid + 1, right);

        // Merge the sorted halves
        merge(numbers, left, mid, right);
    }
}

void display(int numbers[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int myNumbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]); 

    cout << "Original list: ";
    display(myNumbers, size);

    mergeSort(myNumbers, 0, size - 1);

    cout << "Sorted list (Ascending Order): ";
    display(myNumbers, size);

    return 0;
}