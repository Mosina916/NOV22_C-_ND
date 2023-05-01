 #include<iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
template<typename U>
class Graph{
public:
	// unordered_map<string,list<string> >h;
	// unordered_map<int,list<int> >h;
	unordered_map<U,list<U> >h;
	// map<int,list<int> >h;
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

	void dfs(U src,unordered_map<U,bool> &visited){
		cout<<src<<" ";
		visited[src]=true;
		for(auto child:h[src]){
			if(visited[child]!=true){
				dfs(child,visited);
			}
		}

	}


	int totalcomponents(U src,unordered_map<U,bool> &visited){	
		int comp=1;
		dfs(src,visited);
		for(auto x: h){
			if(visited[x.first]!=true){
				dfs(x.first,visited);
				comp++;
			}
		}

		return comp;
	}
};

int main(){
	Graph<int> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	// 2nd grap
	g.addedge(100,101);
	g.addedge(100,102);
	g.addedge(102,101);

	// 3rd graph
	g.addedge(13,16);
	g.addedge(13,17);
	g.addedge(13,19);
	unordered_map<int,bool> visited;
	int co=g.totalcomponents(0,visited);

	cout<<endl<<"totalcomponents are "<<co<<endl;

	
	// g.printgraph();

	// unordered_map<int,bool> visited;
	// g.dfs(0,visited);



	return 0;
}