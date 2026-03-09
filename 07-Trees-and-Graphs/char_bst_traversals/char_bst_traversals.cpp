/* * Task: Character-based Binary Search Tree with all three Traversals
 * Focus: Lexicographical ordering and recursive traversal logic (In-order, Pre-order, Post-order)
 * Author: Muhammad Faheem
 */

#include <iostream>
using namespace std;

struct TreeNode 
{
    char data;     
    TreeNode* left;     
    TreeNode* right;       

    TreeNode(char value) 
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* insert(TreeNode* root, char value) 
{
    if (root == nullptr) 
    {
        return new TreeNode(value);
    }

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

// LNR: Left, Node, Right (Sorted alphabetical order)
void inOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// NLR: Node, Left, Right (Useful for cloning a tree)
void preOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// LRN: Left, Right, Node (Useful for deleting a tree)
void postOrderTraversal(TreeNode* root) 
{
    if (root != nullptr) 
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
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

int main() {
    TreeNode* root = nullptr;

    // Building the tree with characters
    root = insert(root, 'A');
    insert(root, 'B');
    insert(root, 'C');
    insert(root, 'D');
    insert(root, 'E');
    insert(root, 'F');
    insert(root, 'G');
    insert(root, 'H');
    insert(root, 'I');

    cout << "--- Tree Traversal Results ---" << endl;
    
    cout << "In-order   (LNR): ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order  (NLR): ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order (LRN): ";
    postOrderTraversal(root);
    cout << endl;

    deleteTree(root);
    return 0;
}