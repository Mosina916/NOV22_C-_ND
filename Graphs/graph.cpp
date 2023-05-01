 #include<iostream>
#include <list>
using namespace std;
class Graph{
	list<int>*l;
	int n;
public:
	Graph(int N){
		l=new list<int>[N];
		n=N;
	}
	// add edge
	void addedge(int x,int y,bool bird=true){
		l[x].push_back(y);
		if(bird==true){
			l[y].push_back(x);

		}

	}
	// print 
	void printgraph(){
		for (int i = 0; i <n; ++i)
		{
			cout<<i<<"-->";
			for(auto k:l[i]){
				cout<<k<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	Graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	g.printgraph();



	return 0;
}