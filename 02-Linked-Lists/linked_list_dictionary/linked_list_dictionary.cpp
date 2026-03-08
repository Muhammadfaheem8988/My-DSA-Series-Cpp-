/* * Task: Dictionary Implementation using Singly Linked List
 * Focus: Handling 2D arrays within structs and string comparison logic
 * Author: Muhammad Faheem
 */

#include<iostream>
#include<cstring> // Required for strcmp
using namespace std;

struct dict 
{
    char word[50];
    char meanings[5][100];
    int meaningCount;
    dict* next;
};

dict* start = NULL;

void addWord() {
    dict* new_node = new dict;
    
    cout << "Enter the word: ";
    cin >> new_node->word;
    
    cout << "Enter the number of meanings (max 5): ";
    cin >> new_node->meaningCount;
    
    if(new_node->meaningCount > 5) 
    {
        cout << "Limit is 5. Setting to 5.\n";
        new_node->meaningCount = 5;
    }
    
    cin.ignore(); // Clear buffer
    for (int i = 0; i < new_node->meaningCount; i++) 
    {
        cout << "Enter meaning " << i + 1 << ": ";
        cin.getline(new_node->meanings[i], 100);
    }
    
    new_node->next = NULL;
    
    if (start == NULL) 
    {
        start = new_node;
    } 
    else 
    {
        dict* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    cout << "Word added successfully!\n";
}

void searchWord() 
{
    if (start == NULL) {
        cout << "Dictionary is empty.\n";
        return;
    }

    char searchKey[50];
    cout << "Enter the word to search: ";
    cin >> searchKey;
    
    dict* temp = start;
    bool found = false;

    while (temp != NULL) {
        if (strcmp(temp->word, searchKey) == 0) 
        {
            cout << "\nWord: " << temp->word << "\nMeanings:\n";
            for (int i = 0; i < temp->meaningCount; i++) 
            {
                cout << i + 1 << ". " << temp->meanings[i] << endl;
            }
            found = true;
            break;
        }
        temp = temp->next;
    }
    
    if(!found) cout << "Word not found.\n";
}

void showDictionary() {
    if (start == NULL) 
    {
        cout << "The dictionary is empty.\n";
        return;
    }
    dict* temp = start;
    cout << "\n--- Full Dictionary Contents ---";
    while (temp != NULL) 
    {
        cout << "\nWord: " << temp->word;
        for (int i = 0; i < temp->meaningCount; i++) 
        {
            cout << "\n  " << i + 1 << ". " << temp->meanings[i];
        }
        cout << "\n-----------------------------";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, repeat;
    
    do {
        menu:
        cout << "\n========== Dictionary Menu ==========\n";
        cout << "1. Add a Word\n2. Search for a Word\n3. Show Dictionary\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) 
        {
            case 1: addWord(); break;
            case 2: searchWord(); break;
            case 3: showDictionary(); break;
            case 4: cout << "Exiting...\n"; return 0;
            default: 
                cout << "Invalid choice!\n"; 
                goto menu; 
        }
        
        cout << "\nWanna operate more?\n1. YES\n2. NO\nChoice: "; 
        cin >> repeat;
        
    } while (repeat == 1);

    // Memory Cleanup
    while (start != NULL) 
    {
        dict* temp = start;
        start = start->next;
        delete temp;
    }
    
    return 0;
}