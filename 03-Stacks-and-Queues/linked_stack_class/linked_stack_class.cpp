/* * Task: Stack Implementation using Linked List and OOP
 * Focus: Dynamic memory management and encapsulation
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

struct node {
    int item;
    node *next;
};

class stack {
    private:
        node* top;
        int maxsize, size;

    public:
        // Constructor to initialize stack
        stack(int a) {
            top = nullptr;
            maxsize = a;
            size = 0;
        }

        void push() {
            if(size == maxsize) {
                cout << "Overflow! Stack is full" << endl;
            } else {
                int value;
                cout << "Enter value to push: ";
                cin >> value;

                node* newnode = new node;
                newnode->item = value;
                newnode->next = top; // Link to previous top
                top = newnode;       // Move top to new node
                size++;
            }
        }

        void pop() {
            if(size == 0) {
                cout << "Underflow! Stack is empty." << endl;
            } else {
                int value = top->item;
                node *temp = top;
                top = top->next;     // Move top down
                delete temp;         // Free memory
                cout << "The value popped is: " << value << endl;
                size--;
            }
        }

        void display() {
            node* k = top;
            if(size == 0) {
                cout << "No elements found in Stack" << endl;
            } else {
                cout << "\nStack state (Top to Bottom):" << endl;
                while(k != nullptr) {
                    cout << "| " << k->item << " |" << endl;
                    k = k->next;
                }
                cout << " --- " << endl;
            }
        }

        // Destructor to free all memory when object is destroyed
        ~stack() {
            while(top != nullptr) {
                node* temp = top;
                top = top->next;
                delete temp;
            }
        }
};

int main() {
    int s;
    cout << "Enter your stack size: "; 
    cin >> s;
    
    stack obj(s);
    int choice;

    while(1) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1: obj.push(); break;
            case 2: obj.pop(); break;
            case 3: obj.display(); break;
            case 4: return 0; // Using return instead of exit(0) for clean cleanup
            default: cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}