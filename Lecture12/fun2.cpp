#include<iostream>
using namespace std;
void fertocel(int initial,int finalval,int step){
	
	int fer=initial;//0
// loop
	while(fer<=finalval){
		int cel=(5*(fer-32)/9);
		
	cout<<fer<<"     "<<cel<<endl;//0   -17
	fer=fer+step;//20

	}

}
int main(){
	int initial,finalval,step;
	cin>>initial;
	cin>>finalval;
	cin>>step;
	fertocel(initial,finalval,step);

	
	return 0;
}