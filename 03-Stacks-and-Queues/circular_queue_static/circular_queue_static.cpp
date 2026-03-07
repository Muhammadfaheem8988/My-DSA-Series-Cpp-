/* * Task: Circular Queue Implementation using Static Array
 * Focus: Efficient memory reuse via wrap-around logic
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main() {
    int queue[3] = {0};
    int front = -1, rear = -1, newValue;

    while(true) {
        cout << "Enter a value to enqueue: ";
        cin >> newValue;

        // Check if Queue is full (Overflow)
        if((front == 0 && rear == 2) || (front == rear + 1)) { 
            cout << "Overflow: Queue is full!" << endl; 
            break; 
        }

        // Inserting the very first element
        if(front == -1) {
            front = 0;
            rear = 0;
        }
        // Wrap-around: if rear is at the end, move it to the start
        else if (rear == 2) {
            rear = 0;
        }
        // Standard increment
        else {
            rear = rear + 1; 
        }

        queue[rear] = newValue;

        // Display current status of the array
        cout << "Current Queue: ";
        for(int i = 0; i < 3; i++) {
            cout << queue[i] << "  ";
        }
        cout << endl;
    }

    return 0;
}