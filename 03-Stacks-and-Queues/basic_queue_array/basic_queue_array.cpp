/* * Task: Basic Linear Queue Implementation using Array
 * Focus: FIFO (First-In, First-Out) logic and pointer management
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

int main() 
{ 
    int rear = 0, front = 0, i;
    char queue[10]; // Creating a queue for 10 characters
    char data, ans;

    // Initialize queue with spaces for clean visualization
    for (i = 0; i < 10; i++)
    {
        queue[i] = ' ';
    }

    ans = 'y';
    // Data entry into the queue
    while (ans == 'y' || ans == 'Y') 
    {
        // Check for Overflow before adding
        if (rear > 9) 
        {
            cout << "\nQueue Overflow! No more space." << endl;
            break;
        }

        cout << "\nEnter character for queue: ";
        cin >> data;
        
        queue[rear] = data; // Insert at the back
        rear++; 

        cout << "Do you want more items? (y/n): ";
        cin >> ans;
    } 

    // Displaying items to demonstrate FIFO order
    cout << "\n--- Current Queue Content ---" << endl;
    for (i = front; i < rear; i++)
    {
        cout << "Position " << i << ": " << queue[i] << endl;
    }

    if (front == rear) {
        cout << "Queue is empty." << endl;
    }

    return 0;
}