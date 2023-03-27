#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// rec case
	return max(height(root->left),height(root->right))+1;
}

node* insertinbst(node*root,int d){//200 10
	if(root==NULL){
		root=new node(d);
		// return root;
	}
	else if(d<=root->data){
		// lst
		root->left=insertinbst(root->left,d);
		// return root;
	}
	else{
		// rst
		root->right=insertinbst(root->right,d);
		// return root;


	}
	return root;

}


node* buildbst(){
	node*root=NULL;
	
	int data;
	cin>>data;//8
	while(data!=-1){
		

	root=insertinbst(root,data);//200
	cin>>data;//10

	}
	
	return root;

}

void printlevelwise(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<x->data<<' ';
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}
	}
}

// 8 3 10 14 13 1 6 4 7 -1
node* deletion(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// case case
	// case 1 
	if(key<root->data){
		root->left=deletion(root->left,key);
		return root;
	}
	// case  2 rst
	else if(key>root->data){
		root->right=deletion(root->right,key);
		return root;

	}
	// key ==root
	else{
		// root no child
		if(root->left==NULL and root->right==NULL){
			delete root;
			return NULL;
		}
		// root lst child exist only
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;
		}
		// root rst child exist only
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
		}
		// root rst and lst  exist 
		else{
			// // lst max se replace kar rahe hai
			node*temp=root->left;

			while(temp->right!=NULL){
				temp=temp->right;

			}
			swap(root->data,temp->data);
			root->left=deletion(root->left,key);
			return root;
			// rst min se replace kar rahe hai
			// node*temp=root->right;

			// while(temp->left!=NULL){
			// 	temp=temp->left;

			// }
			// swap(root->data,temp->data);
			// root->right=deletion(root->right,key);
			// return root;
			

		}


	}
}

int main(){
	
	node*root=buildbst();
	int key;
	cin>>key;//8

	deletion(root,key);
	printlevelwise(root);
	

	return 0;
}