/* * Task: Doubly Linked List Implementation
 * Focus: Forward and Backward traversal using 'prev' pointers
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* start = NULL;

void insert_at_end() {
    node* new_node = new node;
    cout << "Enter data: ";
    cin >> new_node->data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (start == NULL) {
        start = new_node;
    } else {
        node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp; // Linking back to the previous node
    }
    cout << "Node added successfully!" << endl;
}

void display_forward() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    node* temp = start;
    cout << "Forward List: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void display_backward() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    node* temp = start;
    // First, go to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Now, traverse backward using 'prev'
    cout << "Backward List: ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    int choice;
    while (1) {
        cout << "\n--- Doubly Linked List Menu ---" << endl;
        cout << "1. Insert Node\n2. Display Forward\n3. Display Backward\n4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) insert_at_end();
        else if (choice == 2) display_forward();
        else if (choice == 3) display_backward();
        else if (choice == 4) break;
        else cout << "Invalid Choice!" << endl;
    }

    // Memory Cleanup
    while (start != NULL) {
        node* temp = start;
        start = start->next;
        delete temp;
    }
    return 0;
}