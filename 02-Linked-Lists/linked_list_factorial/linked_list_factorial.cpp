/* * Task: Generate a Linked List of factorials from another Linked List
 * Focus: Pointer manipulation, multiple list management, and memory deallocation
 * Author: Muhammad Faheem
 */

#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* start = NULL;    // Original list pointer
node* startf = NULL;   // Factorial list pointer

// Function to calculate the factorial of a number
int calculateFactorial(int n) 
{
    int result = 1;
    for (int i = n; i >= 1; i--) 
    {
        result = result * i;
    }
    return result;
}

void insert_as_first(int factorialValue) 
{
    node* new_node = new node;
    new_node->data = factorialValue;
    new_node->next = startf;
    startf = new_node;
}

void insert_as_last(int factorialValue) 
{
    if(startf == NULL) 
    {
        insert_as_first(factorialValue);
        return;
    }
    node* temp = startf;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    node* new_node = new node;
    temp->next = new_node;
    new_node->data = factorialValue;
    new_node->next = NULL;
}

void freeMemory(node* list) 
{
    while (list != NULL) 
    {
        node* temp = list;
        list = list->next;
        delete temp; 
    }
}

int main() 
{
    int i = 0;
    node* prev = NULL;
    
    // Creating the initial list with values starting from 3
    while (i < 5) {
        node* new_node = new node;
        new_node->data = i + 3;
        new_node->next = NULL;
        
        if (i == 0) 
        {
            start = new_node;
            prev = new_node;
        }
        else 
        {
            prev->next = new_node;
            prev = new_node;
        }
        i++;
    }

    // Creating the factorial list based on the original list
    node* current = start;
    int nodeCount = 0;
    while (current != NULL) 
    {
        int value = current->data;
        int factResult = calculateFactorial(value);
        
        if (nodeCount == 0) 
        {
            insert_as_first(factResult);
        } 
        else 
        {
            insert_as_last(factResult);
        }
        current = current->next;
        nodeCount++;
    }

    // Displaying the factorial results
    cout << "The Calculated Factorials are:" << endl;
    node* printer = startf;
    while (printer != NULL) 
    {
        cout << printer->data << " ";
        printer = printer->next;
    }
    cout << endl;

    // Cleaning up both lists from heap memory
    freeMemory(start);
    freeMemory(startf);

    return 0;
}