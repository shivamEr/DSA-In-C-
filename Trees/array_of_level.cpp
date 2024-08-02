#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Class definition for a tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize the node
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to build the tree based on pre-order input
Node* preOrder() {
    int data;
    string s;
    cin >> data;
    cin >> s;

    // Create a new node with the given data
    Node* root = new Node(data);

    // Recursively build the left subtree
    if (s == "true") {
        root->left = preOrder();
    }

    // Read the indicator for the right subtree
    cin >> s;

    // Recursively build the right subtree
    if (s == "true") {
        root->right = preOrder();
    }

    return root;
}

// Function to create a vector of vectors for level-order traversal
vector<vector<int>> createLevelOrderList(Node* root) {
    vector<vector<int>> result;

    if (!root) return result;

    // Queue for level-order traversal
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level
        vector<int> level; // Vector to store the current level's node values

        // Process all nodes at the current level
        for (int i = 0; i < levelSize; ++i) {
            Node* currentNode = q.front();
            q.pop();

            // Add the current node's data to the level vector
            level.push_back(currentNode->data);

            // Enqueue the left child if it exists
            if (currentNode->left) {
                q.push(currentNode->left);
            }

            // Enqueue the right child if it exists
            if (currentNode->right) {
                q.push(currentNode->right);
            }
        }

        // Add the current level vector to the result
        result.push_back(level);
    }

    return result;
}

// Function to print the level order list
void printLevelOrderList(const vector<vector<int>>& levels) {
    cout << "[";
    for (size_t i = 0; i < levels.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < levels[i].size(); ++j) {
            cout << levels[i][j];
            if (j < levels[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < levels.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    // Build the binary tree from input
    Node* root = preOrder();

    // Create a vector of vectors representing the level-order list
    vector<vector<int>> levelOrderList = createLevelOrderList(root);

    // Print the level-order list
    printLevelOrderList(levelOrderList);

    return 0;
}
