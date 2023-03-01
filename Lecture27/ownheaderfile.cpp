#include "stack.h"
int main(){

	// stack<int>s;
	stack<char>s;
	s.push('a');
	s.push('b');
	s.push('N');
	

	// cout<<s.v[2]<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}


	return 0;
}