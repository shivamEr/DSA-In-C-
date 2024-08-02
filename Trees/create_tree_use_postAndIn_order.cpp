#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* build(int post[],int ps,int pe,int in[],int is,int ie){
	if(ps>pe || is>ie)
		return NULL;

	int index = -1;
	node* root = new node(post[pe]);
    for(int i=is; is<=ie; i++){
        if(post[pe] == in[i]){
            index = i;
			break; // use break
        }
    }

	int numsLeft = index - is;
	root->left = build(post,ps,ps+numsLeft-1,in,is,index-1);
	root->right = build(post,ps+numsLeft,pe-1,in,index+1,ie);
	return root;
}


void print(node* root){
	if(root == NULL)
		return;
	if(root->left)
		cout<<root->left->data<<" => ";
	else
		cout<<"END => ";
	cout<<root->data;
	if(root->right)
		cout<<" <= "<<root->right->data;
	else
		cout<<" <= END";
	cout<<endl;
	print(root->left);
	print(root->right);
}


int main() {
	int n,m;
	cin>>n;
	int post[n];
	for(int i=0; i<n; i++){
		cin>>post[i]; // post[i] not post[n]
	}
	cin>>m;
	int in[m];
	for(int i =0; i<m; i++){
		cin>>in[i];
	}
    
	node* root = build(post,0,n-1,in,0,m-1);
	print(root);
	return 0;
}