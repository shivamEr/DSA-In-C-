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

void print(node *root){
    if(!root) return;
    
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    node *root = BulidTree();
    print(root);
    return 0;
}

// FLIPKART GRID CONTEST