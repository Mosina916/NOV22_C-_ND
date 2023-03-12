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



void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	cout<<root->data<<",";
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
bool searchinbst(node*root,int key){
	if(root==NULL){
		return false;
	}

	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}

}
// void printlevelwise(node*root){
// 	queue<node*>q;
// 	q.push(root);
// 	q.push(NULL);
// 	while(!q.empty()){
// 		node*x=q.front();
// 		q.pop();
// 		if(x==NULL){
// 			cout<<endl;
// 			if(!q.empty()){
// 				q.push(NULL);
// 			}
// 		}
// 		else{
// 			cout<<x->data<<' ';
// 			if(x->left!=NULL){
// 				q.push(x->left);
// 			}
// 			if(x->right!=NULL){
// 				q.push(x->right);
// 			}
// 		}
// 	}
// }

// void printinrangek1k2(node*root,int k1,int k2){
// 	if(root==NULL){
// 		return;
// 	}

// 	printinrangek1k2(root->left,k1,k2);
// 	if(root->data>=k1 and root->data<=k2){
// 		cout<<root->data<<" ";
// 	}
// 	printinrangek1k2(root->right,k1,k2);
// }
int arr[]={1,2,3,4,5,6,7,8,9};
node* buildtreeusingsortedarr(int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;//4
	node*root=new node(arr[mid]);
	root->left=buildtreeusingsortedarr(s,mid-1);
	root->right=buildtreeusingsortedarr(mid+1,e);
	return root;

}

void printinrangek1k2(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}

	printinrangek1k2(root->right,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2(root->left,k1,k2);
}
int main(){
	int n=sizeof(arr)/sizeof(int);
	node*root=buildtreeusingsortedarr(0,n-1);
	
	// node*root=buildbst();
	// int k1,k2;
	// cin>>k1>>k2;
	// printinrangek1k2(root,k1,k2);
	// int key;
	// cin>>key;//6
	// if(searchinbst(root,key)==true){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }
	printlevelwise(root);

	


	return 0;
}