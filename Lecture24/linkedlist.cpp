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

int main(){
	node x(5);
	node y(10);

	x.next=&y;
	// with the help of x prine x ka data and y ka data
	cout<<x.data<<endl;
	cout<<(x.next)->data<<endl;
	// cout<<(*(x.next)).data<<endl;

	



	return 0;
}