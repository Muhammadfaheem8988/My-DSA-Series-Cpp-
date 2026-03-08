/* * Task: Pure Dynamic Linked Queue Implementation
 * Focus: Unbounded FIFO logic using heap memory allocation
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

struct node {
    int item;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void enqueue(int val) {
    node* new_node = new node;
    new_node->item = val;
    new_node->next = NULL;

    // If queue is empty, both front and rear point to the new node
    if (front == NULL) {
        front = new_node;
        rear = new_node;
    } else {
        // Add to the end and move the rear pointer
        rear->next = new_node;
        rear = new_node;
    }
    cout << "Enqueued: " << val << endl;
}

void dequeue() {
    if (front == NULL) {
        cout << "Underflow! The queue is empty." << endl;
    } else {
        int val = front->item;
        node* temp = front;

        // Move front to the next node
        front = front->next;

        // If the queue becomes empty, reset rear to NULL as well
        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
        cout << "Dequeued: " << val << endl;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
        return;
    }

    node* temp = front;
    cout << "Queue Content: ";
    while (temp != NULL) {
        cout << temp->item << (temp->next ? " -> " : "");
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, val;

    while (true) {
        cout << "\n--- Pure Dynamic Queue ---" << endl;
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                // Cleanup remaining memory before exit
                while (front != NULL) dequeue();
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}