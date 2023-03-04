#include <iostream>
#include<queue>
using namespace std;

int main(){
	// queue q(5);
	// queue q;
	// queue<datatype> name;
	queue<int> q;
	q.push(9);
	q.push(4);
	q.push(2);
	q.push(1);
	q.push(0);
	// q.pop();
	q.push(10);
	q.push(30);
	cout<<q.size()<<endl;

	// cout<<q.arr[3]<<endl;

	// queue print
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}

	cout<<endl;
return 0;
}