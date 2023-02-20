#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		next=NULL;
		data=d;

	}

};

void insertathead(node* &head,node*&tail,int data){
	if(head==NULL and tail==NULL){
		// pehla node of ll 
		node*n=new node(data);
		head=n;
		tail=n;  

	}
	else{
		// only change head
		node*n=new node(data);
		n->next=head;
		head=n;
	}

}
// void printll(node*head){
// 	// node*temp=head;
// 	// while(temp!=NULL){
// 	// 	cout<<temp->data<<" ";
// 	// 	temp=temp->next;
// 	// }

	
// 	while(head!=NULL){
// 		cout<<head->data<<" ";
// 		head=head->next;
// 	}
// }


void printll(node*&head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void insertattail(node*&head,node*&tail,int data){
	// if ll is empty
	if(head==NULL and tail==NULL){
		node*n=new node(data);
		head=n;
		tail=n;
	}
	else{
		node*n=new node(data);
		tail->next=n;
		tail=n;


	}
}
void deleteatfront(node*&head,node*&tail){
	if(head==NULL ){
		// if ll is empty
		return;

	}
	else if(head->next==NULL){
		// single node h t -->change
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		// MULTIPLE NODES 
		node*temp=head->next;
		delete head;
		head=temp;
	}
}
void deleteattail(node*&head,node*&tail){
	if(head==NULL){
		// if ll is empty
		return;

	}
	else if(head->next==NULL){
		// single node h t -->change
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		temp->next=NULL;
		delete tail;

		tail=temp;

	}

}

bool searchinallitertively(node*head,int key){
	node*temp=head;

	while(temp!=NULL){
		if(temp->data==key){
		return true;

	}
	temp=temp->next;

	}
	return false;
	



}
// 3-->5-->1-->4-->10  key-->13
bool searchrec(node*head,int key){
	// base case
	if(head==NULL){
		return false;
	}



	// rec case
	if(head->data==key){
		return true;

	}
	return searchrec(head->next,key);

}
int lengthofll(node*head){
	node*temp=head;
	int cou=0;

	while(temp!=NULL){
		cou++;//4
	temp=temp->next;

	}
	return cou;
	


}
int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}

	// reccase

	return 1+lenrec(head->next);
}
void insertatanyposition(node*&head,node*&tail,int pos,int data){
	if(pos==0){
		insertathead(head,tail,data);
	}
	else if(pos>=lengthofll(head)){
		insertattail(head,tail,data);

	}
	else{
		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}
// even k case mai 2nd dega 
// int midpointofll(node*head){

// 	node*slow=head;
// 	node*fast=head;

// 	while(fast!=NULL){
// 		slow=slow->next;
// 		fast=fast->next->next;
// 	}
// 	return slow->data;
// }
// even k case mai 2nd dega 
int midpointofll(node*head){

	node*slow=head;
	// node*fast=head->next; //even ka first
	node*fast=head;//even ka 2nd

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}
void bubllesortlinklist(node*head){
	for(int i=1;i<=lengthofll(head)-1;i++){
		for(node*j=head;j->next!=NULL;j=j->next){
		if(j->data>j->next->data){
			
			swap(j->data,j->next->data);	
		}
	}	
	}
}

int kthnodefromend(node*head,int k){
	node*slow=head;
	node*fast=head;
	for(int j=1;j<=k;j++){
		fast=fast->next;

	}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	return slow->data;
}
int main(){
	// 3-->5-->1--> null

	node*head=NULL;//-->adrees of the ist node of the ll
	node*tail=NULL;//-->adrees of the last node of the ll
	

	insertathead(head,tail,4);//4
	insertathead(head,tail,1);//1-->4
	insertathead(head,tail,5);//5-->1-->4
	insertathead(head,tail,3);//3-->5-->1-->4
	insertattail(head,tail,10);//3-->5-->1-->4-->10
	insertattail(head,tail,30);//3-->5-->1-->4-->10-->30
	cout<<kthnodefromend(head,3)<<endl;
	// cout<<midpointofll(head)<<endl;
	// bubllesortlinklist(head);
	// printll(head);
	// cout<<lengthofll(head)<<endl ;

	// insertatanyposition(head,tail,3,30);//3-->5-->1-->30-->4-->10
	
	// printll(head);
	// cout<<endl;
	// printll(head);

	// int key;
	// cin>>key;//4

	// if(searchinallitertively(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }

	// if(searchrec(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }







	// deleteatfront(head,tail);//5-->1-->4-->10

	// deleteattail(head,tail);////5-->1-->4



	return 0;
}