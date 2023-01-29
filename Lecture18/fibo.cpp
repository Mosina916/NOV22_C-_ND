#include<iostream>
using namespace std;
// int fact(int n){//0
// 	// base case
// 	if(n==0){
// 		return 1;
// 	}
// 	// rec case
	// /storing the values
// 	int chotaans=fact(n-1);//pure assumption-->24
// 	int finalans=n*chotaans;//5*24-->120
// 	return finalans;

// }



// // pos start 1

// int fibo(int pos){//5
// 	// base case
// 	if(pos==2){
// 		return 1;
// 	}
// 	if(pos==1){
// 		return 0;
// 	}
// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);
	
// }

// pos start 0

int fibo(int pos){//5
	// base case
	if(pos==1){
		return 1;
	}
	if(pos==0){
		return 0;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
int main(){
	int pos;
	cin>>pos;
	if(pos>=0){
		cout<<fibo(pos)<<endl;
	}
	return 0;
}



