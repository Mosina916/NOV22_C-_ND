#include <iostream>
#include<vector>
using namespace std;
// templates
template <typename U>
class stack{
	vector<U> v;
public:
	
	// push
	void push(U d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}
	// top
	U top(){
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