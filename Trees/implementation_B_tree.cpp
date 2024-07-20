#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *BulidTree(){
    int data;
    cin>>data;
    if(data == -1){ // return condition when input == -1
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
// PreOrder Traversal
void preOrder(node *root){
    if(!root) return;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// InOrder Traversal
void inOrder(node *root){
    if(!root) return;
    
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
}
// postOrder Traversal
void postOrder(node *root){
    if(!root) return;
    
    cout<<root->data<<" ";
    postOrder(root->left);
    postOrder(root->right);
}
int main(){
    node *root = BulidTree();
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}

// FLIPKART GRID CONTEST