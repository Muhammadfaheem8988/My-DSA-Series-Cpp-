/* * Task: Linear Queue with Enqueue and Dequeue operations
 * Focus: FIFO (First-In, First-Out) logic and pointer resetting
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main() 
{ 
    int rear = 0, front = 0, i, choice;
    char queue[10];
    char data;

    // Initialize queue with spaces
    for (i = 0; i < 10; i++) queue[i] = ' ';

    while (1) 
    {
        cout << "\n1. Enqueue (Add)\n2. Dequeue (Remove)\n3. Display\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) 
        {
            // Overflow Check
            if (rear == 10) 
            {
                cout << "Overflow! No more space in the queue." << endl;
            } 
            else 
            {
                cout << "Enter character: ";
                cin >> data;
                queue[rear] = data;
                rear++;
                cout << "Item added." << endl;
            }
        } 
        else if (choice == 2) 
        {
            // Underflow Check
            if (front == rear) 
            {
                cout << "Underflow! Queue is empty." << endl;
            } 
            else 
            {
                cout << "Dequeued item: " << queue[front] << endl;
                queue[front] = ' '; // Optional: clear for visual
                front++;

                // Reset pointers if queue becomes empty to reuse space
                if (front == rear) 
                {
                    front = 0;
                    rear = 0;
                }
            }
        } 
        else if (choice == 3) 
        {
            cout << "\nQueue Content: ";
            for (i = 0; i < 10; i++) 
            {
                cout << "[" << queue[i] << "] ";
            }
            cout << "\nFront: " << front << " | Rear: " << rear << endl;
        } 
        else if (choice == 4) 
        {
            break;
        }
        else 
        {
            cout << "Invalid choice!" << endl;
        }
    } 

    return 0;
}