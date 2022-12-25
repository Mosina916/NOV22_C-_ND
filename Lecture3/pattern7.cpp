#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	// upper part

	while(rowno<=n){
	// 1 rowkakaam
	int count=1;
	// while(count<=n-rowno+1){

	while(count<=n-rowno+1){
		cout<<'*';
		count=count+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}
	// lower part 
	// rowno=6;

	while(rowno<=2*n-1){
		// 1 row ka kaam

	int stcc=1;
	while(stcc<=rowno-n+1){
		cout<<'*';
		stcc=stcc+1;
	}

	cout<<endl;
	rowno=rowno+1;



	}


	



	return 0;
}