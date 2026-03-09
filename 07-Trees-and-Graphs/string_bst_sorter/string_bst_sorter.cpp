/* * Task: Binary Search Tree for String Sorting
 * Focus: Lexicographical ordering of multiple strings
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <string>
using namespace std;

struct TreeNode 
{
    string data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string value) 
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, string value) 
{
    if (root == nullptr) 
    {
        return new TreeNode(value);
    }

    // Strings are compared alphabetically
    if (value < root->data) 
    {
        root->left = insert(root->left, value);
    } else 
    {
        root->right = insert(root->right, value);
    }
    return root;
}

// In-order traversal visits nodes in alphabetical order
void inOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        inOrderTraversal(root->left);
        cout << root->data << " | ";
        inOrderTraversal(root->right);
    }
}

void deleteTree(TreeNode* root) 
{
    if (root != nullptr) 
    {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

int main() 
{
    TreeNode* root = nullptr;

    // A collection of words to be sorted
    string data[] = {
        "babble", "fable", "jacket", "backup", "eagle", 
        "daily", "gain", "bandit", "abandon", "abash", 
        "accuse", "economy", "adhere", "advise", "cease", 
        "debunk", "feeder", "genius", "fetch", "chain", 
        "" // Empty string used as an end-marker
    };

    int size = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < size; i++) 
    {
        if (!data[i].empty()) 
        {
            root = insert(root, data[i]);
        }
    }

    cout << "--- Alphabetically Sorted Words ---" << endl;
    inOrderTraversal(root);
    cout << "\n-----------------------------------" << endl;

    deleteTree(root);

    return 0;
}