#include<bits/stdc++.h>
using namespace std;

struct Node {
	struct Node *left,*right;
	int value;
	
	Node(int data)
	{
		this->value = data;
		left = right = NULL;
	}
};

	void InorderNonRecursiveTraversal(Node *root){
		//using a stack 
		stack<Node *>DataStore;
		   Node *current = root;
		while(current != NULL || DataStore.empty() == false)
		{
		    while(current != NULL)
			 {
			 	 DataStore.push(current);
			 	 current = current->left;
			  }
			  current = DataStore.top();
			  DataStore.pop();
			  cout<<current->value<" ";
			  current = current->right;
		}
	}
	
	void InorderRecursiveTraversal(Node *root){
		InorderRecursiveTraversal(root->left);
		cout<<root->value<<" ";
		InorderRecursiveTraversal(root->right);
	}

/*int main(){
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	InorderNonRecursiveTraversal(root);
	cout<<endl;
	InorderRecursiveTraversal(root);
}*/
