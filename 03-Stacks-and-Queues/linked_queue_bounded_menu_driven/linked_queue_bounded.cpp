/* * Task: Bounded Linked Queue Implementation
 * Focus: Using pointers for FIFO while maintaining a fixed capacity
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
int maxSize, currentCount = 0;

void creation() {
    cout << "Enter your Queue Size Limit: "; 
    cin >> maxSize;
    front = NULL;
    rear = NULL; 
    currentCount = 0;
    cout << "Queue initialized with limit " << maxSize << endl;
}

void enqueue() {	
    if(currentCount == maxSize) {
        cout << "Overflow! Queue is Full" << endl;
    }
    else {
        node* new_node = new node;
        cout << "Enter value: ";
        cin >> new_node->item;
        new_node->next = NULL;

        if(front == NULL) {
            front = new_node;
            rear = new_node;
        }
        else {
            rear->next = new_node;
            rear = new_node;
        }
        currentCount++;
        cout << "Item added successfully." << endl;
    }
}

void dequeue() {
    if(front == NULL) {
        cout << "Underflow! Queue is empty" << endl;
    }
    else {
        int val = front->item;
        node* temp = front;

        if (front == rear) {
            front = NULL;
            rear = NULL;
        }
        else {
            front = front->next;
        }
        
        delete temp;
        currentCount--;
        cout << "Item removed: " << val << endl;
    }
}

void display() {
    node* temp = front;
    if(temp == NULL) {
        cout << "Queue is empty." << endl;
    }
    else {
        cout << "Queue state: [ ";
        while(temp != NULL) {
            cout << temp->item << (temp->next ? " -> " : "");
            temp = temp->next;
        }
        cout << " ]" << endl;
    }
}

void checkEmpty() {
    if(front == NULL) {
        cout << "Status: Empty (Underflow condition)" << endl;
    }
    else {
        cout << "Status: Not Empty. Current items: " << currentCount << endl;
    }
}

int main() {
    int choice;
    while(1) {
        menu:
        cout << "\n--- Linked Queue Menu ---" << endl;
        cout << "1. Create/Reset Queue\n2. Enqueue\n3. Dequeue\n4. Display\n5. Check Status\n6. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: creation(); break;
            case 2: enqueue(); break;
            case 3: dequeue(); break;
            case 4: display(); break;
            case 5: checkEmpty(); break;
            case 6: return 0;
            default:
                cout << "Invalid Choice!" << endl;
                goto menu;
        }
    }
    return 0;
}