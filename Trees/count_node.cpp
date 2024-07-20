#include <iostream>
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

node *BulidTree()
{
    int data;
    cin >> data;
    if (data == -1)
    { // return condition when input == -1
        return NULL;
    }
    // my work to make root node
    node *root = new node(data);
    // Recursion will give LST
    root->left = BulidTree();
    // Recursion will give RST
    root->right = BulidTree();
    // Finally return Root node
    return root;
}
// countNodes in Tree
int countNode(node *root)
{
    if (root == NULL)
        return 0;
    // my work to count node
    int l = countNode(root->left);
    int r = countNode(root->right);
    return r + l + 1;
}

int heightTree(node *root)
{
    if (root == NULL)
        return 0;
    int left = heightTree(root->left);
    int right = heightTree(root->right);

    // find maximum height of left and right childs
    int height = max(left, right);
    return 1 + height;
}

// Same Tree
bool isSameTree(TreeNode *p, TreeNode *q)
{
    // Base Case when both will be NULL at Same time
    if (p == NULL && q == NULL)
        return true;

    // Base case when any one will be NULL    
    if (p == NULL || q == NULL)
        return false;
  
  // Condition to check both value is equal
    if (p->val == q->val)
    {
        // Recursion will call for left and right child
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    else
        return false;
}

int main()
{
    node *root = BulidTree();
    int cnt = countNode(root);
    cout << cnt << endl;

    int height = heightTree(root);
    cout << height << endl;

    return 0;
}