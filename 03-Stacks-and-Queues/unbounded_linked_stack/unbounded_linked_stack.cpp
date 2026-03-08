/* * Task: Unbounded Linked Stack Implementation
 * Focus: Pure dynamic memory allocation without size constraints
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

    public:
        stack() {
            top = NULL;
        }

        // Difference: Value is passed as an argument
        void push(int a) {
            node* newnode = new node;
            newnode->item = a;

            if(top == NULL) {
                newnode->next = NULL;
                top = newnode;
            } else {
                newnode->next = top;
                top = newnode;
            }
        }

        void pop() {
            if(top == NULL) {
                cout << "Underflow! Stack is empty." << endl;
            } else {
                int value = top->item;
                node *temp = top;
                top = top->next;
                delete temp;
                cout << "The value popped is: " << value << endl;
            }
        }

        void display() {
            node* k = top;
            if(k == NULL) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "\nStack items (Dynamic):" << endl;
                while(k != NULL) {
                    cout << "| " << k->item << " |" << endl;
                    k = k->next;
                }
            }
        }
};

int main() {
    stack obj;
    int choice, value;

    while(1) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nChoice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                obj.push(value); // Passing value to function
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}