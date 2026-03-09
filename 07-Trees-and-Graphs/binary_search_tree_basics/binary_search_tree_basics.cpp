/* * Task: Binary Search Tree (BST) Implementation
 * Focus: Recursive insertion and In-order traversal
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

struct TreeNode 
{
    int data;           
    TreeNode* left;       
    TreeNode* right;     

    // Constructor for easy node creation
    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Recursive function to insert a value into the BST
TreeNode* insert(TreeNode* root, int value) 
{
    // If tree is empty, return a new node
    if (root == nullptr) 
    {
        return new TreeNode(value);
    }

    // Otherwise, recur down the tree
    if (value < root->data) 
    {
        root->left = insert(root->left, value);
    } 
    else 
    {
        root->right = insert(root->right, value);
    }
    return root;
}

// LNR Traversal: Left -> Node -> Right (Results in sorted order)
void inOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Recursive function to free memory (Post-order cleanup)
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

    // Building the tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "In-order traversal (Sorted): ";
    inOrderTraversal(root);
    cout << endl;

    // Cleanup
    deleteTree(root);

    return 0;
}