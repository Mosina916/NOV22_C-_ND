#include <iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
class stack{
	node*head;
	int l;
	
public:
	stack(){
		head=NULL;
		l=0;

	}
	
	// push
	// insertatfront
	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		l++;
	}
	
	// pop
	// deleteatfront
	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;
	}

	
	// top
	int top(){
		return head->data;
	}
	
	// empty
	bool empty(){
		return l==0;
	}
	
	// size
	int size(){
		return l;
	}
	

};
int main(){

	stack s;
	s.push(9);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);

	// cout<<s.v[2]<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}


	return 0;
}