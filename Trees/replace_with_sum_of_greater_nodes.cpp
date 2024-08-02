#include<iostream>
#include <vector>
    using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode *buildBST(const vector<int> &inorder, int start, int end)
{
    if (start > end)
        return nullptr;
    int mid = (start + end) / 2;
    TreeNode *node = new TreeNode(inorder[mid]);
    node->left = buildBST(inorder, start, mid - 1);
    node->right = buildBST(inorder, mid + 1, end);
    return node;
}

void replaceWithSum(TreeNode *root, int &sum)
{
    if (!root)
        return;
    replaceWithSum(root->right, sum);
    sum += root->data;
    root->data = sum;
    replaceWithSum(root->left, sum);
}

void preorder(TreeNode *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int n;
    cin >> n;
    vector<int> inorder(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> inorder[i];
    }

    TreeNode *root = buildBST(inorder, 0, n - 1);

    int sum = 0;
    replaceWithSum(root, sum);

    preorder(root);
    cout << endl;

    return 0;
}