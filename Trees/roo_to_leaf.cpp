#include <iostream>
#include <vector>
using namespace std;

// Node structure for the binary tree
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

// Function to build the binary tree from pre-order input
Node* buildTree() {
    int data;
    string isNode;
    
    cin >> data;
    cin >> isNode;

    Node* root = new Node(data);

    if (isNode == "true") {
        root->left = buildTree();
    }
    
    cin >> isNode;
    if (isNode == "true") {
        root->right = buildTree();
    }
    
    return root;
}

// Recursive function to find and print all root-to-leaf paths with a sum equal to k
void findPaths(Node* root, int sum, vector<int>& path, int k) {
    if (!root) return;

    // Add the current node to the path
    path.push_back(root->data);

    // Update the running sum
    sum += root->data;

    // Check if the current node is a leaf and the path sum equals k
    if (!root->left && !root->right && sum == k) {
        // Print the path
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Recur for left and right subtrees
    findPaths(root->left, sum, path, k);
    findPaths(root->right, sum, path, k);

    // Remove the current node from the path to backtrack
    path.pop_back();
}

int main() {
    // Build the binary tree from pre-order input
    Node* root = buildTree();

    int k;
    cin >> k;

    // Vector to store the current path
    vector<int> path;

    // Find and print all paths with sum k
    findPaths(root, 0, path, k);

    return 0;
}
