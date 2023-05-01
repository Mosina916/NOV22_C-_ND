 #include<iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
template<typename U>
class Graph{
	unordered_map<U,list<pair<U,int> > >h;
public:

	// insert
	void addedge(U src,U des,int dist,bool bidir=true){
		h[src].push_back(make_pair(des,dist));
		if(bidir){
			h[des].push_back(make_pair(src,dist));
		}

	}


	// print

	void printgraph(){
		for(auto x:h){
			cout<<x.first<<" --> ";
			for(auto child:x.second){
				cout<<"( "<<child.first<<","<<child.second<<") ";

			}

			cout<<endl;

		}
	}
	

};

int main(){
	Graph<string> g;
	g.addedge("jaipur","amritsar",4);
	g.addedge("jaipur","delhi",2);
	g.addedge("jaipur","mumbai",8);
	g.addedge("amritsar","agra",1);
	g.addedge("delhi","agra",1);
	g.addedge("mumbai","bhopal",3);
	g.addedge("bhopal","agra",2);

	g.printgraph();


	


	return 0;
}