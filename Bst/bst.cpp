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
bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}



	// rec case
	if(root->data>=min and root->data<=max and isbstornot(root->left,min,root->data) and isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;

}
// 8 3 10 14 13 1 6 4 7 -1
class p{
public:
	bool ihb;
	int h;
	p(){
		h=0;
		ihb=true;
	}
};
p isheightbalanced(node*root){
	p x;
	// basecase
	if(root==NULL){
		return x;
	}



	// rec case
	p l=isheightbalanced(root->left);
	p r=isheightbalanced(root->right);
	x.h=max(l.h,r.h)+1;
	if(l.ihb==true and r.ihb==true and abs(l.h-r.h)<=1){
		x.ihb=true;
	}
	else{
		x.ihb=false;

	}
	

	return x;

}
class linkelist{
public:
	node*head;
	node*tail;
	linkelist(){
		head=NULL;
		tail=NULL;
	}

};
linkelist convertbstintosll(node*root){
	linkelist l;
	// base case
	if(root==NULL){
		return l;
	}


	// rec case
	// no child
	if(root->left==NULL and root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;

	}
	// only lst exist
	else if(root->left!=NULL and root->right==NULL){
		linkelist x=convertbstintosll(root->left);
		x.tail->right=root;
		l.head=x.head;
		l.tail=root;
		// return l;
	}
	// only rst exist
	else if(root->left==NULL and root->right!=NULL){
		linkelist y=convertbstintosll(root->right);
		root->right=y.head;
		l.head=root;
		l.tail=y.tail;
		// return l;

	}
	// both lst and rst exist
	else{
		linkelist x=convertbstintosll(root->left);
		linkelist y=convertbstintosll(root->right);
		x.tail->right=root;
		root->right=y.head;
		l.head=x.head;
		l.tail=y.tail;
		// return l;

	}
	return l;

}
void printll(node*root){

	while(root!=NULL){
		cout<<root->data<<" ";
		root=root->right;

	}

	
}
void rightview(node*root,int level,int &mlttn){//1 0 2 1 3 2  4 3
	// base case 
	if(root==NULL){
		return;
	}

	// rec case
	if(level>mlttn){//1>0
		cout<<root->data<<" ";//8 10 14 13
		mlttn++;//4
	}
	rightview(root->right,level+1,mlttn);
	rightview(root->left,level+1,mlttn);
}
void leftview(node*root,int level,int &mlttn){//1 0 2 1 3 2  4 3
	// base case 
	if(root==NULL){
		return;
	}

	// rec case
	if(level>mlttn){//1>0
		cout<<root->data<<" ";//8 10 14 13
		mlttn++;//4
	}
	leftview(root->left,level+1,mlttn);
	leftview(root->right,level+1,mlttn);
	
}
int main(){
	
	node*root=buildbst();
	// linkelist x=convertbstintosll(root);
	// printll(x.head);
	int i=0;
	rightview(root,1,i);
	i=0;
	cout<<endl;
	leftview(root,1,i);
	
	// printlevelwise(root);
	// p x=isheightbalanced(root);
	// cout<<"tree ki height is "<<x.h<<endl;
	// if(x.ihb==true){
	// 	cout<<"tree is balanced"<<endl;
	// }
	// else{
	// 	cout<<"tree is not balanced"<<endl;
	// }
	// if(isbstornot(root)==true){
	// 	cout<<"bt is a bst"<<endl;
	// }
	// else{
	// 	cout<<"bt is not a bst"<<endl;
	// }

	


	return 0;
}