#include <iostream>
#include<vector>
using namespace std;
class stack{
	
public:
	
	// push
	
	// pop
	
	// top
	
	// empty
	
	// size
	

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