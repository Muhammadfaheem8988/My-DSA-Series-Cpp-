/* * Task: Dynamic Circular Queue Implementation
 * Focus: Memory allocation using pointers and user-defined size
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main() {
    int size, front = -1, rear = -1, newValue;

    cout << "Enter the size of the Queue: ";
    cin >> size;

    // Dynamically allocating array based on user input
    int *queue = new int[size];

    // Initializing array with 0 for clean display
    for(int i = 0; i < size; i++) {
        queue[i] = 0;
    }

    while(1) {
        cout << "\nEnter a value to enqueue: ";
        cin >> newValue;

        // Overflow Condition: (Front is at start and Rear at end) OR (Rear is right behind Front)
        if((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Status: Overflow! Queue is full." << endl;
            break;
        }

        // Logic for inserting the first element
        if(front == -1) {
            front = 0;
            rear = 0;
        }
        //reset rear to 0 if it reaches the last index
        else if (rear == size - 1) {
            rear = 0;
        }
        // Normal increment
        else {
            rear = rear + 1;
        }

        queue[rear] = newValue;

        // Printing the current state of the dynamic array
        cout << "Queue State: ";
        for(int i = 0; i < size; i++) {
            cout << queue[i] << "  ";
        }
        cout << endl;
    }

    // Cleaning up memory before exiting
    delete[] queue;
    return 0;
}