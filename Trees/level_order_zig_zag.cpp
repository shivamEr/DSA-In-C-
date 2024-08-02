#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Node class definition
class node
{
public:
    int data;
    node *left;
    node *right;

    // Constructor to initialize a node
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to construct the binary tree from input
node *preOrder()
{
    int data;
    string s;
    cin >> data;
    cin >> s;

    // Create the root node
    node *root = new node(data);

    // Recursively build the left subtree
    if (s == "true")
    {
        root->left = preOrder();
    }

    // Recursively build the right subtree
    cin >> s;
    if (s == "true")
    {
        root->right = preOrder();
    }

    return root;
}

// Function to print the zigzag order of the binary tree
void printZigZag(node *root)
{
    if (!root)
        return;

    // Queue for level order traversal
    queue<node *> q;

    // Start with the root node
    q.push(root);

    // Flag to indicate direction of printing
    bool leftToRight = true;

    // Continue until the queue is empty
    while (!q.empty())
    {
        int size = q.size();

        // Vector to store the current level's nodes
        vector<int> level(size);

        // Process all nodes at the current level
        for (int i = 0; i < size; i++)
        {
            node *frontNode = q.front();
            q.pop();

            // Determine the position to insert the node's data
            int index = leftToRight ? i : (size - 1 - i);
            level[index] = frontNode->data;

            // Add left child to the queue
            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            // Add right child to the queue
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }

        // Print the current level
        for (int val : level)
        {
            cout << val << " ";
        }

        // Toggle the direction for the next level
        leftToRight = !leftToRight;
    }
}

int main()
{
    // Build the binary tree from input
    node *root = preOrder();

    // Print the binary tree in zigzag order
    printZigZag(root);

    return 0;
}
