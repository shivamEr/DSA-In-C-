#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

// Function to check if the tree is height-balanced
pair<int, bool> isHeightBalancedOptimised(node *root)
{
    // Base case: An empty tree is balanced and has a height of 0
    if (root == NULL)
    {
        return {0, true};
    }

    // Check the left subtree
    pair<int, bool> left = isHeightBalancedOptimised(root->left);

    // Check the right subtree
    pair<int, bool> right = isHeightBalancedOptimised(root->right);

    // Calculate the current node's height
    int height = max(left.first, right.first) + 1;

    // Determine if the current subtree is balanced
    bool isBalanced = left.second && right.second && abs(left.first - right.first) <= 1;

    // Return the height and balance status of the current subtree
    return {height, isBalanced};
}

int main()
{
    node *root = build("true");

    cout << boolalpha << isHeightBalancedOptimised(root).second;

    return 0;
}
