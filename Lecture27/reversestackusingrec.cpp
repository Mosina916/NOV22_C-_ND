#include<iostream>
#include<stack>
using namespace std;
void insertatbootom(stack<int> &s,int ele){
	// base case
	if(s.empty()){
		s.push(ele);
		return;
	}

	// rec case
	int te=s.top();
	s.pop();
	insertatbootom(s,ele);
	s.push(te);
}
void reversestack(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}


	// /rec case
	int ele=s.top();
	s.pop();
	reversestack(s);
	insertatbootom(s,ele);
}
int main(){
	stack<int> s;
	s.push(9);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	// while(!s.empty()){
	// 	cout<<s.top()<<" ";
	// 	s.pop();
	// }

	// reversestack(s);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}




	return 0;
}