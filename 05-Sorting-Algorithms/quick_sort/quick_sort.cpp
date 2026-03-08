/* * Task: Implementation of Quick Sort (Divide and Conquer)
 * Focus: Partitioning logic and recursive sorting
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int* a, int* b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes the last element as pivot, places
   the pivot element at its correct position in sorted
   array, and places all smaller to left and larger to right */
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = (low - 1);    // Index of smaller element

    for (int j = low; j <= high - 1; j++) 
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) 
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// The main function that implements QuickSort
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        // pi is partitioning index, arr[pi] is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int data[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: ";
    display(data, n);

    quickSort(data, 0, n - 1);

    cout << "Sorted Array (Quick Sort): ";
    display(data, n);

    return 0;
}