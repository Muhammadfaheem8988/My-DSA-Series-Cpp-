/* * Task: Hash Table Implementation with Collision Handling (Chaining)
 * Focus: Hash functions, indexing, and linked list integration
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 10;

// Structure for the Key-Value Pair (Node in our chain)
struct KeyValuePair 
{
    string key;
    int value;
    KeyValuePair* next;
};

class HashDictionary 
{
    private:
        KeyValuePair* table[TABLE_SIZE];
    
        // Simple Hash Function: Sum of ASCII values % Table Size
        int hashFunction(string key) 
        {
            int hash = 0;
            for (int i = 0; i < key.length(); i++) 
            {
                hash += key[i];
            }
            return hash % TABLE_SIZE;
        }
    
    public:
        HashDictionary() 
        {
            for (int i = 0; i < TABLE_SIZE; i++) 
            {
                table[i] = nullptr;
            }
        }
    
        // Insertion logic with update capability
        void insert(string key, int value) 
        {
            int index = hashFunction(key);
            KeyValuePair* newPair = new KeyValuePair{key, value, nullptr};
    
            if (table[index] == nullptr) 
            {
                table[index] = newPair;
            } 
            else 
            {
                KeyValuePair* current = table[index];
                while (current != nullptr) 
                {
                    // If key already exists, update its value
                    if (current->key == key) 
                    {
                        current->value = value;
                        delete newPair; // Clean up unused node
                        return;
                    }
                    if (current->next == nullptr) break;
                    current = current->next;
                }
                current->next = newPair; // Append to the end of the chain
            }
        }
    
        bool find(string key, int& value) 
        {
            int index = hashFunction(key);
            KeyValuePair* current = table[index];
    
            while (current != nullptr) 
            {
                if (current->key == key) {
                    value = current->value;
                    return true;
                }
                current = current->next;
            }
            return false;
        }
    
        void remove(string key) 
        {
            int index = hashFunction(key);
            KeyValuePair* current = table[index];
            KeyValuePair* previous = nullptr;
    
            while (current != nullptr) 
            {
                if (current->key == key) 
                {
                    if (previous == nullptr) 
                        table[index] = current->next;
                    else 
                        previous->next = current->next;
                    
                    delete current;
                    return;
                }
                previous = current;
                current = current->next;
            }
        }
    
        void display() 
        {
            for (int i = 0; i < TABLE_SIZE; i++) 
            {
                cout << "Index " << i << ": ";
                KeyValuePair* current = table[i];
                if (current == nullptr) cout << "[Empty]";
                while (current != nullptr) 
                {
                    cout << "(" << current->key << ": " << current->value << ") -> ";
                    current = current->next;
                }
                cout << "NULL" << endl;
            }
        }
};

int main() 
{
    HashDictionary dict;

    dict.insert("apple", 1);
    dict.insert("banana", 2);
    dict.insert("orange", 3);
    dict.insert("grape", 4);
    dict.insert("banana", 5); // Updates existing banana value

    cout << "--- Hash Table Contents (Chaining) ---" << endl;
    dict.display();

    int val;
    cout << "\nSearch Result for 'banana': ";
    if (dict.find("banana", val)) 
        cout << val << endl;
    else 
        cout << "Not found" << endl;

    return 0;
}