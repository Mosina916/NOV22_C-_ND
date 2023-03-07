#include<iostream>
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


node*buildtree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	else{
		node*root=new node(d);
		root->left=buildtree();
		root->right=buildtree();
		return root;
	}
}

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	
	postorder(root->left);
	
	postorder(root->right);
	cout<<root->data<<" ";
}

int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	return max(height(root->left),height(root->right))+1;
}




// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int countnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return countnodes(root->left)+countnodes(root->right)+1;
}

int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// /rec case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}

bool searchnode(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==key ||searchnode(root->left,key)||searchnode(root->right,key)){
		return true;
	}
	return false;

}
void mirroroftree(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case

	swap(root->left,root->right);
	mirroroftree(root->left);
	mirroroftree(root->right);
}
int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// if(root->left==NULL and root->right==NULL){
	// 	return 0;
	// }


	// rec case
	int op1=diameter(root->left);//dia is passing through lst
	int op2=diameter(root->right);//dia passing through rst
	int op3=height(root->left)+height(root->right);//diameter is passing through root
	return max(op1,max(op2,op3));
}
int main(){
	// diameter(NULL);
	node*root=buildtree();
	cout<<"diameter is "<<diameter(root)<<endl;
	// mirroroftree(root);

	// int key;
	// cin>>key;//
	// if(searchnode(root,key)==true){
	// 	cout<<"node is present"<<endl;
	// }
	// else{
	// 	cout<<"node is not present"<<endl;

	// }
	// preorder(root);
	// cout<<endl;
	// // inorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;

// 	cout<<"Total nodes are "<<countnodes(root)<<endl;
// 	cout<<"sum of nodes are "<<sumofnodes(root)<<endl;
// 	cout<<"Height of tree is "<<height(root)<<endl;
// // 


	return 0;
}