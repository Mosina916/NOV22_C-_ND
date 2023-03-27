#include<iostream>
#include<queue>
// heap sort
using namespace std;
#define minheap priority_queue<int,vector<int>,greater<int> >
int main(){
	// priority_queue<datatype> name;
	// priority_queue<int> h;//max heap
	 minheap h;//minheap
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);
	h.push(0);

	while(!h.empty()){
		cout<<h.top()<<" ";//1
	h.pop();

	}

	cout<<endl;
	



	return 0;
}