#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Define the node structure for the binary tree
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

// Function to build a binary tree from preorder and inorder traversal
Node* buildTree(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd) {
    if (inStart > inEnd) return NULL;

    // Create a new node with the current preorder element
    Node* root = new Node(preorder[preIndex++]);

    // Find the index of this node in the inorder array
    int inIndex;
    for (int i = inStart; i <= inEnd; i++) {
        if (inorder[i] == root->data) {
            inIndex = i;
            break;
        }
    }

    // Recursively build the left and right subtrees
    root->left = buildTree(preorder, inorder, preIndex, inStart, inIndex - 1);
    root->right = buildTree(preorder, inorder, preIndex, inIndex + 1, inEnd);

    return root;
}

// Helper function to find the largest BST subtree in a binary tree
// It returns a tuple: (isBST, size, min, max)
pair<bool, pair<int, pair<int, int>>> largestBSTSubtree(Node* root, int& maxSize) {
    if (!root) return {true, {0, {INT_MAX, INT_MIN}}};

    // Recursively find the largest BST in the left and right subtrees
    auto left = largestBSTSubtree(root->left, maxSize);
    auto right = largestBSTSubtree(root->right, maxSize);

    bool isBST = false;
    int size = 0;
    int minValue = root->data;
    int maxValue = root->data;

    // Check if the current subtree is a BST
    if (left.first && right.first && left.second.second.second < root->data && root->data < right.second.second.first) {
        isBST = true;
        size = left.second.first + right.second.first + 1;
        minValue = min(left.second.second.first, root->data);
        maxValue = max(right.second.second.second, root->data);
    } else {
        size = max(left.second.first, right.second.first);
    }

    // Update the maximum size of a BST subtree found so far
    maxSize = max(maxSize, size);

    return {isBST, {size, {minValue, maxValue}}};
}

// Main function to solve the problem
int main() {
    int n;
    cin >> n;

    vector<int> preorder(n);
    vector<int> inorder(n);

    // Input preorder traversal
    for (int i = 0; i < n; i++) {
        cin >> preorder[i];
    }

    // Input inorder traversal
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }

    // Build the tree
    int preIndex = 0;
    Node* root = buildTree(preorder, inorder, preIndex, 0, n - 1);

    // Find the size of the largest BST subtree
    int maxSize = 0;
    largestBSTSubtree(root, maxSize);

    // Output the size of the largest BST subtree
    cout << maxSize << endl;

    return 0;
}
