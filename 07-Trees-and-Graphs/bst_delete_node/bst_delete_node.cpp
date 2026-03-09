/* * Task: Deleting a specific node from a BST
 * Focus: Handling Leaf, One-child, and Two-children cases
 * Author: Muhammad Faheem
 */

#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Helper function to find the minimum value (needed for Case 3)
TreeNode* findMinNode(TreeNode* node) {
    TreeNode* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

TreeNode* insert(TreeNode* root, string value) {
    if (root == nullptr) return new TreeNode(value);
    if (value < root->data) 
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}

TreeNode* deleteNode(TreeNode* root, string key) {
    if (root == nullptr) return root;

    // 1. Locate the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } 
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } 
    // 2. Node found!
    else {
        // Case 1 & 2: No child or only one child
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } 
        else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        // Get the in-order successor (smallest in the right subtree)
        TreeNode* temp = findMinNode(root->right);
        
        // Copy the successor's data to this node
        root->data = temp->data;
        
        // Delete the in-order successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;
    string words[] = {"jacket", "fable", "babble", "backup", "eagle", "daily", "gain"};
    
    for (string s : words) root = insert(root, s);

    cout << "Original Tree: ";
    inOrderTraversal(root);
    cout << endl;

    string target = "fable";
    cout << "\nDeleting '" << target << "'..." << endl;
    root = deleteNode(root, target);

    

    cout << "Tree after deletion: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}