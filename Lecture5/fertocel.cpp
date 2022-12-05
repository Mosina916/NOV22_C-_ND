#include<iostream>
using namespace std;
int main(){
	// int initial=0;
	// int finalval=300;
	// int step=20;

	int initial,finalval,step;
	cin>>initial;
	cin>>finalval;
	cin>>step;



	int fer=initial;//0

// loop
	while(fer<=finalval){
		int cel=(5*(fer-32)/9);
		// int cel=(5.0/9)*(fer-32);
		// float cel=(5.0/9)*(fer-32);

	cout<<fer<<"     "<<cel<<endl;//0   -17
	fer=fer+step;//20

	}


	


	
	

	

	return 0;
}