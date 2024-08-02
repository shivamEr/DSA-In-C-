#include <iostream>
#include <queue>
using namespace std;

// Define the node class for the binary tree
class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// Function to build the binary tree from level order input
node* buildTree() {
    int data;
    cin >> data;

    if (data == -1) return NULL;

    node* root = new node(data);
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* current = q.front();
        q.pop();

        int leftData, rightData;
        cin >> leftData;
        cin >> rightData;

        if (leftData != -1) {
            current->left = new node(leftData);
            q.push(current->left);
        }

        if (rightData != -1) {
            current->right = new node(rightData);
            q.push(current->right);
        }
    }

    return root;
}

// Function to print all the leaf nodes
void printLeafNodes(node* root) {
    if (root == NULL) return;

    // Check if the current node is a leaf node
    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
        return;
    }

    // Recursively check the left and right subtrees
    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int main() {
    node* root = buildTree();  // Build the tree from level order input
    printLeafNodes(root);      // Print all leaf nodes
    return 0;
}
