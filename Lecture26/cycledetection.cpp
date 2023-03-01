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
node* midpointofll(node*head){//5

	node*slow=head;
	node*fast=head->next; //even ka first
	// node*fast=head;//even ka 2nd

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

node*mergetwosortedll(node*head1,node*head2){
	// if l1 is empty
	if(head1==NULL){
		return head2;
	}
	// / if l1 is empty
	if(head2==NULL){
		return head1;
	}
	node*newhead=NULL;
	if(head1->data<head2->data){
		newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);
		// return newhead;
	}
	else{
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		// return newhead;

	}
	return newhead;
}
node* mergesort(node*head){//5
	// base case
	
	if(head==NULL||head->next==NULL){
		return head;
	}




	// rec case
	// step 1 find mid;
	
	node*mid=midpointofll(head);//5 ka address
	node*temp=mid->next;//NULL
	mid->next=NULL;
	node*n=mergesort(head); //5
	node*m=mergesort(temp);//NULL     0 2 7
	return mergetwosortedll(n,m);//0 1 2 3 5 6 7

}


node* reversell(node*head){

	node*curr=head;
	node*prev=NULL;
	while(curr!=NULL){
		node*ne=curr->next;
	curr->next=prev;
	prev=curr;
	curr=ne;

	}
	return prev;
	


}

node* reversellrec(node*head){
if(head==NULL||head->next==NULL){
	return head;
}

// rec case

	node*temp=head->next;
	head->next=NULL;
	node*n=reversellrec(temp);
	node*k=n;
	while(k->next!=NULL){
		k=k->next;

	}
	k->next=head;
	return n;

}

bool cyclepresentornot(node*head){
	bool kyacycalehai=false;
	node*s=head;
	node*f=head;

	while(f!=NULL and f->next!=NULL){
		s=s->next;
	f=f->next->next;
	if(f==s){
		kyacycalehai=true;
		break;

	}

	}
	// if(kyacycalehai==true){
	// 	return true;
	// }
	// return false;

	return kyacycalehai;
	

}
void createcycle(node*head,node*tail,int pos){
	node*temp=head;
	for (int i = 1; i <=pos; ++i)
	{
		temp=temp->next;
	}
	tail->next=temp;

}
void breakcycle(node*head){
	 // check cyckle hai ya nahi
	bool kyacycalehai=false;
	node*s=head;
	node*f=head;

	while(f!=NULL and f->next!=NULL){
		s=s->next;
	f=f->next->next;
	if(f==s){
		kyacycalehai=true;
		break;

	}

	}
	if(kyacycalehai==true){
		// break the cycle;
		s=head;
		while(s->next!=f->next){
				s=s->next;
		f=f->next;

		}
		f->next=NULL;
	
	}

}
int main(){
	// 3-->5-->1--> null

	node*head=NULL;//-->adrees of the ist node of the ll
	node*tail=NULL;//-->adrees of the last node of the ll
	
	int n;
	cin>>n;//7
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;// 1 2 3 4 5 6 7 8 
		insertattail(head,tail,data);
	}

	// if(cyclepresentornot(head)==true){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }


	createcycle(head,tail,2);

	breakcycle(head);
	// node*newhead=reversellrec(head);
	printll(head);

	



	return 0;
}