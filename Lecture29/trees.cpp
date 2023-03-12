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



// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// rec case
	return max(height(root->left),height(root->right))+1;
}
int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	

	// rec case
	int op1=diameter(root->left);//dia is passing through lst
	int op2=diameter(root->right);//dia passing through rst
	int op3=height(root->left)+height(root->right);//diameter is passing through root
	return max(op1,max(op2,op3));
}
class pa{
public:
	int h;
	int di;
	pa(){
		h=0;
		di=0;
	}
};
pa diaf(node*root){
	pa x;
	// b case
	if(root==NULL){
		return x;
	}
	// rec case
	pa l=diaf(root->left);
	pa r=diaf(root->right);
	//  apne x ka height set
	x.h=max(l.h,r.h)+1;
	//  apne dia ka height set
	int op1=l.di;
	int op2=r.di;
	int op3=l.h+r.h;
	x.di=max(op1,max(op2,op3));
	return x;

}

int main(){

	node*root=buildtree();
	// cout<<"diameter is "<<diameter(root)<<endl;
	pa ans=diaf(root);
	cout<<"diameter is "<<ans.di<<endl;
	cout<<"height is "<<ans.h<<endl;

	


	return 0;
}