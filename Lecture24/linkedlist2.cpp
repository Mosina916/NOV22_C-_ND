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
int main(){
	// 3-->5-->1-->4

	node*head=NULL;//-->adrees of the ist node of the ll
	node*tail=NULL;//-->adrees of the last node of the ll
	

	insertathead(head,tail,4);//4
	insertathead(head,tail,1);//1-->4
	insertathead(head,tail,5);//5-->1-->4
	insertathead(head,tail,3);//3-->5-->1-->4

	printll(head);
	cout<<endl;
	printll(head);


	return 0;
}