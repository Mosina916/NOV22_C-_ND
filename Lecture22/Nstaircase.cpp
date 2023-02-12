#include<iostream>
using namespace std;
// // at max 3 jumps can be taken
// int nstaricase(int n){//abc
// 	// base case
// 	if(n==1||n==2){
// 		return n;
// 	}
// 	if(n==0){
// 		return 1;
// 	}
// 	// if(n==1){
// 	// 	return 1;
// 	// }
// 	// if(n==2){
// 	// 	return 2;
// 	// }

	
// 	// rec case
// 	return nstaricase(n-1)+nstaricase(n-2)+nstaricase(n-3);

	
// }

// at max 3 jumps can be taken
int nstaricase(int n){//abc
	// base case
	if(n==1||n==2){
		return n;
	}
	if(n==0){
		return 1;
	}
	if(n==3){ 
		return 4;
	}
	// if(n==1){
	// 	return 1;
	// }
	// if(n==2){
	// 	return 2;
	// }

	
	// rec case
	return nstaricase(n-1)+nstaricase(n-2)+nstaricase(n-3)+nstaricase(n-4);

	
}

nstaricase(){

}
int main(){
	int n;
	cin>>n;//6
	
	cout<<nstaricase(n)<<endl;

	

	return 0;
}