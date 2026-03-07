/* * Task: Dynamic Circular Queue with Enqueue and Dequeue
 * Focus: Handling front/rear pointers during deletion and memory reuse
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main() {
    int size, front = -1, rear = -1, val, choice;

    cout << "Enter Queue Size: ";
    cin >> size;

    int *queue = new int[size];
    for(int i = 0; i < size; i++) queue[i] = 0;

    while(1) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Exit\nChoose: ";
        cin >> choice;

        if(choice == 1) {
            // Overflow Check
            if((front == 0 && rear == size - 1) || (front == rear + 1)) {
                cout << "Overflow!" << endl;
            } else {
                cout << "Enter value: ";
                cin >> val;
                if(front == -1) { front = 0; rear = 0; }
                else if(rear == size - 1) { rear = 0; }
                else { rear++; }
                queue[rear] = val;
            }
        } 
        else if(choice == 2) {
            // Underflow Check
            if(front == -1) {
                cout << "Underflow!" << endl;
            } else {
                cout << "Dequeued: " << queue[front] << endl;
                queue[front] = 0; // Optional: clear the spot visually
                
                // If only one element was left
                if(front == rear) {
                    front = -1;
                    rear = -1;
                }
                // Wrap-around front
                else if(front == size - 1) {
                    front = 0;
                }
                else {
                    front++;
                }
            }
        } 
        else if(choice == 3) {
            break;
        }

        // Display current state
        cout << "Queue: ";
        for(int i = 0; i < size; i++) cout << queue[i] << "  ";
        cout << endl;
    }

    delete[] queue;
    return 0;
}