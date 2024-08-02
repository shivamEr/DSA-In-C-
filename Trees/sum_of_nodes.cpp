#include <iostream>
using namespace std;

// Node class definition
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

// Function to build the binary tree from input
node* buildTree() {
    int data;
    string hasLeft, hasRight;
    cin >> data;

    node* root = new node(data);

    cin >> hasLeft;
    if (hasLeft == "true") {
        root->left = buildTree();
    }

    cin >> hasRight;
    if (hasRight == "true") {
        root->right = buildTree();
    }

    return root;
}

// Function to calculate the sum of all nodes
int sumOfNodes(node* root) {
    if (root == NULL) {
        return 0;  // Base case: if the node is null, its contribution to the sum is 0
    }

    // Calculate the sum of the current node and the sum of its left and right subtrees
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return root->data + leftSum + rightSum;
}

int main() {
    node* root = buildTree();  // Build the tree from input
    cout << sumOfNodes(root) << endl;  // Calculate and output the sum of all nodes
    return 0;
}
