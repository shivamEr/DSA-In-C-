#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Definition of a binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to build the tree from level order input
Node* buildTreeFromLevelOrder(const vector<int>& levelOrder) {
    if (levelOrder.empty() || levelOrder[0] == -1) {
        return NULL;
    }

    queue<Node*> q;
    int index = 0;

    Node* root = new Node(levelOrder[index++]);
    q.push(root);

    while (!q.empty() && index < levelOrder.size()) {
        Node* current = q.front();
        q.pop();

        // Left child
        if (index < levelOrder.size() && levelOrder[index] != -1) {
            current->left = new Node(levelOrder[index]);
            q.push(current->left);
        }
        index++;

        // Right child
        if (index < levelOrder.size() && levelOrder[index] != -1) {
            current->right = new Node(levelOrder[index]);
            q.push(current->right);
        }
        index++;
    }

    return root;
}

// Function to print the right view of the binary tree
void printRightView(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();

        // Traverse all nodes of the current level
        for (int i = 0; i < n; i++) {
            Node* current = q.front();
            q.pop();

            // If it's the last node in this level, print it
            if (i == n - 1) {
                cout << current->data << " ";
            }

            // Enqueue left and right children
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
    }
}

int main() {
    int value;
    vector<int> levelOrder;

    // Read the level order input
    while (cin >> value) {
        levelOrder.push_back(value);
    }

    // Build the binary tree from the level order input
    Node* root = buildTreeFromLevelOrder(levelOrder);

    // Print the right view of the tree
    printRightView(root);

    return 0;
}
