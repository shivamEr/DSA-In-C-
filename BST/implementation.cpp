#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *inserBST(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = inserBST(root->left, data);
    }
    else
    {
        root->right = inserBST(root->right, data);
    }

    return root;
}

node *createBST()
{
    int data;
    cin >> data;
    node *root = NULL;
    if (data == -1)
        return root;

    while (data != -1)
    {
        root = inserBST(root, data);
        cin >> data;
    }
    return root;
}

void preOrder(node *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node *root)
{
    if (!root)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(node *root)
{
    if (!root)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// print between range
// It's called prunie
void printRange(int i, int j, node *root)
{
    if (!root)
        return;

    if (root->data < i)
    {
        printRange(i, j, root->right);
    }
    else if (root->data > j)
    {
        printRange(i, j, root->left);
    }
    else
    {
        printRange(i, j, root->left);
        if (root->data >= i && root->data <= j)
            cout << root->data << " ";
        printRange(i, j, root->right);
    }
}

// for checking isBalanced the tree
int findHeight(TreeNode *root)
{
    if (!root)
        return 0;
    return max(findHeight(root->left), findHeight(root->right)) + 1;
}

bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;

    int lh = findHeight(root->left);
    int rh = findHeight(root->right);

    if (abs(lh - rh) > 1)
        return false;

    return isBalanced(root->left) && isBalanced(root->right);
}

int main()
{
    node *root = createBST();
    cout << "Pre Order" << endl;
    preOrder(root);
    cout << endl;
    cout << "In Order" << endl;
    inOrder(root);
    cout << endl;
    cout << "Post Order" << endl;
    postOrder(root);

    // Print between range
    int i, j;
    cin >> i >> j;
    printRange(i, j, root);
    cout << endl;

    return 0;
}