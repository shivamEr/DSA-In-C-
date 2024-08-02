#include <iostream>
#include <vector>
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

// Function to find nodes without siblings and add them to the result vector
void findNodesWithoutSiblings(node* root, vector<int>& result) {
    if (root == NULL) {
        return;
    }

    // Check if the current node has a left child without a sibling
    if (root->left != NULL && root->right == NULL) {
        result.push_back(root->left->data);
    }

    // Check if the current node has a right child without a sibling
    if (root->right != NULL && root->left == NULL) {
        result.push_back(root->right->data);
    }

    // Recurse on left and right subtrees
    findNodesWithoutSiblings(root->left, result);
    findNodesWithoutSiblings(root->right, result);
}

int main() {
    node* root = buildTree();

    vector<int> result;
    findNodesWithoutSiblings(root, result);

    // Print the result
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
