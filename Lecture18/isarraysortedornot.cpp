#include<iostream>
using namespace std;
// bool isarraysortedornot(int arr[],int n){
// 	// base case
// 	if(n==1){
// 		return true;
// 	}
// 	// rec case
// 	if(isarraysortedornot(arr,n-1) and arr[n-2]<=arr[n-1]){
// 		return true;
// 	}
// 	return false;
// }
bool isarraysortedornot2(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}
	// rec case
	if(isarraysortedornot2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
}

int main(){
	int arr[]={1,2,2,5,8};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysortedornot2(arr,n)==true){
		cout<<"yes sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;
	}
	return 0;
}



