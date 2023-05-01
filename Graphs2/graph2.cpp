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
	// void addedge(U x,U y,bool bird=true){
	void addedge(U x,U y,bool bird=false){
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


	// void sssp(U src,U dest){

	// queue<U> q;
	// q.push(src);
	// unordered_map<U,bool> visited;
	// unordered_map<U,int> distance;
	// unordered_map<U,U> parent;
	// distance[src]=0;
	// parent[src]=src;

	// visited[src]=true;
	// while(!q.empty()){
	// 	U x=q.front();
	// 	q.pop();
	// 	cout<<x<<" ";
	// 	// jitne direc conn nodes hai if not visited push in queue
	// 	for(auto p:h[x]){
	// 		if(!visited[p]){
	// 			q.push(p);
	// 			visited[p]=true;
	// 			distance[p]=distance[x]+1;
	// 			parent[p]=x;

	// 		}
	// 	}
	// }

	// cout<<endl;

	// // path
	// U temp=dest;
	// while(temp!=src){
	// 	cout<<temp<<"<--";
	// temp=parent[temp];


	// }
	// cout<<temp<<endl;
	
	// }


	int sssp(U src,U dest){

	queue<U> q;
	q.push(src);
	unordered_map<U,bool> visited;
	unordered_map<U,int> distance;
	unordered_map<U,U> parent;
	distance[src]=0;
	parent[src]=src;

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
				parent[p]=x;

			}
		}
	}

	cout<<endl;

	// path
	U temp=dest;
	while(temp!=src){
		cout<<temp<<"<--";
	temp=parent[temp];


	}
	cout<<temp<<endl;
	return distance[dest];
	
	}	

	
	
};
								  			    // 2--> 1 3 
												// 3--> 1 4 2 
												// 4--> 0 1 3 
												// 1--> 0 4 3 2 
												// 0--> 1 4 




int main(){
	Graph<int> g;
	int board[50] = {0};
	 	board[2] = 13;
	  	board[5] = 2;
	   board[9] = 18; 
	   board[18] = 11; 
	   board[17]=-13; 
	   board[20] = -14; 
	   board[24] = -8; 
	   board[25] = 10; 
	   board[32] = -2; 
	   board[34] = -22;


	   for(int src=0;src<=35;src++){
	   	for(int dice=1;dice<=6;dice++){
	   		int dest=src+dice+board[src+dice];
	   		g.addedge(src,dest);
	   	}
	   }


	   cout<<g.sssp(0,36)<<endl;











	return 0;
}