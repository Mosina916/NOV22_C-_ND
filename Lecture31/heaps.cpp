#include<iostream>
#include<vector>
// heap sort
using namespace std;
class Minheap{
	vector<int> v;
public:
	Minheap(){
		v.push_back(-1);
	}

	// insert
	void insert(int d){
		v.push_back(d);

		int child=v.size()-1;

		while(child!=1){
			int parent=child/2;
		if(v[parent]>v[child]){
			swap(v[parent],v[child]);
		}
		child=parent;

		}
		
	}

	// deletion
	void heapify(int index){//1
		int lci=2*index;//2
		int rci=lci+1;//3
		int minindex=index;
		if(lci<v.size() and v[minindex]>v[lci]){
			minindex=lci;//2
		}
		if(rci<v.size() and v[minindex]>v[rci]){
			minindex=rci;//2
		}

		if(minindex!=index){
			swap(v[minindex],v[index]);
		heapify(minindex);

		}
		


	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);


	}

	// search
	int top(){
		return v[1];
	}

	// size
	int size(){
		return v.size()-1;
	}

	// empty
	bool empty(){
		return v.size()==1;

	}
};


int main(){
	Minheap h;
	

	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(0);

	while(!h.empty()){
		cout<<h.top()<<" ";//1
	h.pop();

	}

	cout<<endl;
	



	return 0;
}