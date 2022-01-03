#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left,*right;
	
	Node(int value)
	{
		this->data = value;
		left = right = NULL;
	}
};

void RecursivePreorder(Node *root)
{
	if(root== NULL)
	 return;
	 
	cout<<root->data<" ";
	RecursivePreorder(root->left);
	RecursivePreorder(root->right);
}

void NonRecursivePreorder(Node *root){
	stack<Node *>interim;
	interim.push(root);
	Node *current;
	while(interim.empty() != false || root != NULL)
	 {
	 	current = interim.top();
	 	cout<<current->data<<" ";
	 	interim.pop();
	 	if(current->right != NULL)
	 	interim.push(current->right);
	 	if(current->left != NULL)
	 	interim.push(current->left);
	 	root = interim.top();
	 }
}
int main(){
    
    struct Node *root = new Node(10);
   /* root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);*/
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(2);
	RecursivePreorder(root);
	NonRecursivePreorder(root);

}

