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
	void bfs(U src){

	queue<U> q;
	q.push(src);
	unordered_map<U,bool> visited;
	visited[src]=true;
	while(!q.empty()){
		U x=q.front();
		q.pop();
		cout<<x<<" ";
		// jitne direc conn nodes hai if not visited push in queue
		for(auto p:h[x]){
			if(!visited[p]){
				q.push(p);
				visited[p]=true;

			}
		}
	}

	cout<<endl;


	}	


	void distsnceofeverynodefromsrc(U src){

	queue<U> q;
	q.push(src);
	unordered_map<U,bool> visited;
	unordered_map<U,int> distance;
	distance[src]=0;

	visited[src]=true;
	while(!q.empty()){
		U x=q.front();
		q.pop();
		cout<<x<<" ";
		// jitne direc conn nodes hai if not visited push in queue
		for(auto p:h[x]){
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;

			}
		}
	}

	cout<<endl;

	for(auto l:distance){
		cout<<"distance of "<<l.first<<" from "<<src<<" is "<<l.second<<endl;
	}


	}	
};
								  			    // 2--> 1 3 
												// 3--> 1 4 2 
												// 4--> 0 1 3 
												// 1--> 0 4 3 2 
												// 0--> 1 4 




int main(){
	Graph<int> g;
	// Graph<string> g;
	// g.h[2]={2,4}
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);
	
	// g.printgraph();

	// g.bfs(0);

	// g.distsnceofeverynodefromsrc(4);
	// g.distsnceofeverynodefromsrc(0);


	g.sssp(0,2);




	return 0;
}