#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Node class definition
class node {
public:
    int data;
    node* left;
    node* right;

    // Constructor to initialize a node
    node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to build the binary tree from input
node* buildTree(string s) {
    if (s == "true") {
        int data;
        cin >> data;
        node* root = new node(data);

        // Read left subtree
        string left;
        cin >> left;
        if (left == "true") {
            root->left = buildTree(left);
        }

        // Read right subtree
        string right;
        cin >> right;
        if (right == "true") {
            root->right = buildTree(right);
        }

        return root;
    }
    return NULL;
}

// Function to perform level order traversal and print each level on a new line
void printLevelOrder(node* root) {
    if (!root) return;

    // Queue for level order traversal
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level

        // Vector to store the current level's node values
        vector<int> currentLevel;

        // Process all nodes at the current level
        for (int i = 0; i < levelSize; ++i) {
            node* currentNode = q.front();
            q.pop();

            // Add the current node's data to the current level vector
            currentLevel.push_back(currentNode->data);

            // Enqueue the left child if it exists
            if (currentNode->left) {
                q.push(currentNode->left);
            }

            // Enqueue the right child if it exists
            if (currentNode->right) {
                q.push(currentNode->right);
            }
        }

        // Print the current level
        for (int val : currentLevel) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Build the binary tree from input
    node* root = buildTree("true");

    // Print the level order traversal
    printLevelOrder(root);

    return 0;
}
