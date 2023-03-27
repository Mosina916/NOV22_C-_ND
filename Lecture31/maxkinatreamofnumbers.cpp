#include<iostream>
#include<queue>
using namespace std;
#define minheap priority_queue<int,vector<int>,greater<int> >
void printheap(minheap h){
	while(!h.empty()){
				cout<<h.top()<<" ";
				h.pop();
			}
			cout<<endl;
}
int main(){
	minheap h;//minheap
	// 3 1 30 6 -1 20 1 5 -1 60 2 3 -1 ....
	int k;
	cin>>k;//3
	int co=1;
	while(1){
		int d;
		cin>>d;//3 1 30 6 -1
		if(d==-1){
			// prev print
			printheap(h);
			

		}
		else{
			if(co<=k){
				h.push(d);
				co++;//4
			}
			else{
				if(d>h.top()){
					h.pop();
					h.push(d);
				}

			}


		}


	}



	return 0;
}