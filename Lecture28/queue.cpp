#include <iostream>
using namespace std;
class queue{

	int *arr;
	// int arr[5]
	int cs;
	int ts;
	int f;
	int r;

	// queue(int s){
	// }
public:	
	queue(int s=5){
		arr=new int[s];
		ts=s;
		cs=0;
		f=0;
		r=-1;

	}
	// push
	void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}

	}

	// pop
	void pop(){
		if(cs>0){
			f=(f+1)%ts;
			cs--;
		}
		else{
			cout<<"underflow"<<endl;

		}
	}


	// empty
	bool empty(){
		// if(cs==0){
		// 	return true;
		// }
		// return false;

		return cs==0;
	}
	
	// size
	int size(){
		return cs;
	}
	// front
	int front(){
		if(cs!=0){
			return arr[f];

		}
		
	}

};
int main(){
	// queue q(5);
	queue q;
	q.push(9);
	q.push(4);
	q.push(2);
	q.push(1);
	q.push(0);
	q.pop();
	q.push(10);
	q.push(30);

	// cout<<q.arr[3]<<endl;

	// queue print
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
return 0;
}