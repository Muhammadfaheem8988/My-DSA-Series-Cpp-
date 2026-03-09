/* * Task: Finding Minimum and Maximum values in a BST
 * Focus: Understanding tree structure (Extremes are at the far left and far right)
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

// Function to find the minimum value (Far Left)
string findMin(TreeNode* root) 
{
    if (root == nullptr) return "Tree is empty";
    
    // Keep going left as long as there is a left child
    if (root->left == nullptr) 
        return root->data;
    
    return findMin(root->left);
}

// Function to find the maximum value (Far Right)
string findMax(TreeNode* root) 
{
    if (root == nullptr) return "Tree is empty";
    
    // Keep going right as long as there is a right child
    if (root->right == nullptr) 
        ) return root->data;
    
    return findMax(root->right);
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
    // Unsorted list of words
    string words[] = {"jacket", "fable", "babble", "backup", "eagle", "daily", "gain", "abandon"};
    
    for (string s : words) {
        root = insert(root, s);
    }

    

    cout << "--- BST Extreme Values ---" << endl;
    cout << "Alphabetically First (Min): " << findMin(root) << endl;
    cout << "Alphabetically Last  (Max): " << findMax(root) << endl;

    deleteTree(root);
    return 0;
}