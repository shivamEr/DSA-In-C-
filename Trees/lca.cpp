#include <iostream>
using namespace std;

// Node definition for the Binary Search Tree
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a node into the BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (root == NULL) {
        return new TreeNode(val);
    }
    if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

// Function to find the lowest common ancestor of two nodes in a BST
TreeNode* findLCA(TreeNode* root, int p, int q) {
    while (root != NULL) {
        if (p < root->val && q < root->val) {
            root = root->left;
        } else if (p > root->val && q > root->val) {
            root = root->right;
        } else {
            // This is the split point
            return root;
        }
    }
    return NULL; // Just a safety return, though it should never be reached given problem constraints
}

int main() {
    int n;
    cin >> n;

    // Read BST nodes
    TreeNode* root = NULL;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insertIntoBST(root, value);
    }

    // Read the two nodes for which LCA is to be found
    int p, q;
    cin >> p >> q;

    // Find LCA
    TreeNode* lca = findLCA(root, p, q);
    if (lca != NULL) {
        cout << lca->val << endl;
    }

    return 0;
}
