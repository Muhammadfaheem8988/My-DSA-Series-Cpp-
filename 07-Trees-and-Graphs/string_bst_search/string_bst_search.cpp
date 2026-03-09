/* * Task: Search Operation in a String-based BST
 * Focus: Efficient O(\log n) retrieval using lexicographical comparison
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
    if (root == nullptr) return new TreeNode(value);

    if (value < root->data) 
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
        
    return root;
}

// Search Function: Returns true if the word exists in the tree
bool search(TreeNode* root, string key) 
{
    // Base Case: Tree is empty or word not found
    if (root == nullptr) 
    {
        return false;
    }

    // If word is found at the current node
    if (root->data == key) 
    {
        return true;
    }

    // If target word is smaller, search the left subtree
    if (key < root->data) 
    {
        return search(root->left, key);
    }
    
    // If target word is larger, search the right subtree
    return search(root->right, key);
}

void inOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
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
    string words[] = {"babble", "fable", "jacket", "backup", "eagle", "daily", "gain"};
    
    for (string s : words) {
        root = insert(root, s);
    }

    cout << "Tree contains: ";
    inOrderTraversal(root);
    cout << endl;

    string target;
    cout << "\nEnter a word to search for: ";
    cin >> target;

    

    if (search(root, target)) 
    {
        cout << "Result: '" << target << "' was found in the dictionary!" << endl;
    } 
    else 
    {
        cout << "Result: '" << target << "' is not in the list." << endl;
    }

    deleteTree(root);
    return 0;
}