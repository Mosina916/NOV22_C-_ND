#include <iostream>
#include<vector>
using namespace std;
class stack{
	vector<int> v;
public:
	
	// push
	void push(int d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}
	// top
	int top(){
		return v[v.size()-1];
	}
	// empty
	bool empty(){
		return v.size()==0;
		// if(v.size()==0){
		// 	return true;
		// }
		// return false;
	}
	// size
	int size(){
		return v.size();
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