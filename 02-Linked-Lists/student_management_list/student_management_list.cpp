/* * Task: Student Management System using Singly Linked List
 * Focus: CRUD operations (Create, Read, Search, Delete) on complex structures
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <string>
using namespace std;

struct student {
    int id;
    string name;
    float GPA;
    student* next;
};

student* start = nullptr;

void insert_as_first(int entryNum) {
    student* new_node = new student;
    cout << "\n--- Student Entry #" << entryNum << " ---" << endl;
    cout << "Enter Roll no: ";
    cin >> new_node->id;
    cout << "Enter Name: ";
    cin.ignore(); // Clear buffer for string input
    getline(cin, new_node->name);
    cout << "Enter GPA: ";
    cin >> new_node->GPA;
    
    new_node->next = start; // Link new node to the current start
    start = new_node;       // Update start to the new node
}

void insert_as_last(int entryNum) {
    if (!start) {
        insert_as_first(entryNum);
        return;
    }
    
    student* new_node = new student;
    cout << "\n--- Data Entry for Student #" << entryNum << " ---" << endl;
    cout << "Enter Roll no: ";
    cin >> new_node->id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, new_node->name);
    cout << "Enter GPA: ";
    cin >> new_node->GPA;
    new_node->next = nullptr;

    student* ptr = start;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}

void display() {
    if (start == nullptr) {
        cout << "\nList is empty (Underflow)!" << endl;
        return;
    }
    student* ptr = start;
    cout << "\n--- Current Student List ---" << endl;
    while (ptr != nullptr) {
        cout << "ID: " << ptr->id << " | Name: " << ptr->name << " | GPA: " << ptr->GPA << endl;
        ptr = ptr->next;
    }
}

void delete_by_id() {
    if (!start) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    int targetID;
    cout << "\nEnter Roll no to delete: ";
    cin >> targetID;

    student* ptr = start;
    student* prev = nullptr;

    while (ptr != nullptr && ptr->id != targetID) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == nullptr) {
        cout << "Record not found." << endl;
        return;
    }

    if (prev == nullptr) {
        start = ptr->next; // Deleting the first node
    } else {
        prev->next = ptr->next; // Bypassing the node to be deleted
    }

    delete ptr;
    cout << "Student ID " << targetID << " deleted successfully." << endl;
}

void search() {
    if (!start) {
        cout << "The list is empty." << endl;
        return;
    }
    int searchID;
    cout << "\nEnter ID to search: ";
    cin >> searchID;

    student* ptr = start;
    while (ptr != nullptr) {
        if (ptr->id == searchID) {
            cout << "Record Found: ID " << ptr->id << ", Name: " << ptr->name << ", GPA: " << ptr->GPA << endl;
            return;
        }
        ptr = ptr->next;
    }
    cout << "Student not found." << endl;
}

void free_all_memory() {
    while (start != nullptr) {
        student* temp = start;
        start = start->next;
        delete temp;
    }
    cout << "\nAll memory cleaned up." << endl;
}

int main() {
    // Initial data entry
    insert_as_first(1);
    insert_as_last(2);

    display();

    search();

    delete_by_id();

    cout << "\nFinal list after operations:" << endl;
    display();

    free_all_memory();
    return 0;
}