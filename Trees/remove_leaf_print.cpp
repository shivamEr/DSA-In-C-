#include <iostream>
#include <string>
using namespace std;

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

node* buildTree() {
    int d;
    string s;
    cin >> d;
    cin >> s;

    node* root = new node(d);

    if (s == "true") {
        root->left = buildTree();
    }

    cin >> s;
    if (s == "true") {
        root->right = buildTree();
    }

    return root;
}

node* removeLeaves(node* root) {
    if (root == NULL) {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL) {
        delete root;
        return NULL;
    }

    root->left = removeLeaves(root->left);
    root->right = removeLeaves(root->right);

    return root;
}

void printTree(node* root) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL) {
        cout << "END => ";
    } else {
        cout << root->left->data << " => ";
    }

    cout << root->data << " <= ";

    if (root->right == NULL) {
        cout << "END";
    } else {
        cout << root->right->data;
    }

    cout << endl;

    printTree(root->left);
    printTree(root->right);
}

int main() {
    node* root = buildTree();
    root = removeLeaves(root);
    printTree(root);
    return 0;
}
