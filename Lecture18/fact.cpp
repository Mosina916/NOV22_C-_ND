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




int fact(int n){//0
	// base case
	if(n==0){
		return 1;
	}
	// rec case
	return n*fact(n-1);//pure assumption-->24
}
int main(){
	// int n=5;
	int n;
	cin>>n;
	cout<<fact(n)<<endl;//-->5*fact(4)
	return 0;
}



