 #include<iostream>
#include <list>
#include <unordered_map>
// #include <map>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> >h;
	// unordered_map<int,list<int> >h;
	unordered_map<U,list<U> >h;
	// map<int,list<int> >h;

	
public:
	
	// add edge
	// void addedge(string x,string y,bool bird=false){
	// void addedge(int x,int y,bool bird=true){
	void addedge(U x,U y,bool bird=true){
		h[x].push_back(y);
		if(bird==true){
			h[y].push_back(x);

		}

	}
	// print 
	void printgraph(){
		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto z:x.second){
				cout<<z<<" ";

			}
			cout<<endl;

		}
		
	}
};
int main(){
	Graph<int> g;
	// Graph<string> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	// g.addedge("putin","trump");
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("modi","trump",true);
	// g.addedge("modi","yogi",true);
	// g.addedge("pope","");
	// g.addedge("prabhu","modi");
	// g.addedge("yogi","prabhu");
	
	
	g.printgraph();



	return 0;
}