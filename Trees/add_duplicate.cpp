#include <iostream>
using namespace std;

// Node structure for the binary search tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a new node in BST
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to duplicate nodes and insert as left child
void duplicateNodes(Node* root) {
    if (!root) return;

    // Recursively duplicate left and right subtrees
    duplicateNodes(root->left);
    duplicateNodes(root->right);

    // Create duplicate node
    Node* duplicate = new Node(root->data);

    // Insert duplicate as left child
    duplicate->left = root->left;
    root->left = duplicate;
}

// Function to print the tree in a specific format
void printTree(Node* root) {
    if (root == NULL) return;

    // Print current node's data and its left and right children
    if (root->left != NULL) {
        cout << root->left->data;
    } else {
        cout << "END";
    }

    cout << " => " << root->data << " <= ";

    if (root->right != NULL) {
        cout << root->right->data;
    } else {
        cout << "END";
    }

    cout << endl;

    // Recursively print left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

int main() {
    int n;
    cin >> n;
    Node* root = NULL;

    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        root = insert(root, data);
    }

    // Duplicate nodes
    duplicateNodes(root);

    // Print the tree
    printTree(root);

    return 0;
}
