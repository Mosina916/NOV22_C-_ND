#include<iostream>
using namespace std;

int nstaricase(int n,int mj){ //0 3
	// base case
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	// rec case

	int sum=0;
	for(int k=1;k<=mj;k++){
		sum=sum+nstaricase(n-k,mj);//0+0+0

	}

	return sum;



}
int main(){
	int n,mj;
	cin>>n>>mj;//5 3 -->13
	
	cout<<nstaricase(n,mj)<<endl;

	

	return 0;
}