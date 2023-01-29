#include<iostream>
using namespace  std;
int sumofarr(int arr[],int n){
	// base case
	if(n==0){
		return 0;
	}
	// if(n==1){
	// 	return arr[0];
	// }


	// rec case
	return sumofarr(arr,n-1)+arr[n-1];//13
}
int sumofarr2(int arr[],int n){
	// base case
	if(n==0){
		return 0;
	}
	// if(n==1){
	// 	return arr[0];
	// }


	// rec case
	return sumofarr2(arr+1,n-1)+arr[0];//23
}

int sumofarr3(int arr[],int n,int i){
	// base case
	// if(i==n-1){
	// 	return arr[i];
	// }
	if(i==n){
		return 0;
	}


	// rec case
	return sumofarr3(arr,n,i+1)+arr[i];//23 40
}
int main(){
	int arr[]={3,11,6,2,1};
	int n=sizeof(arr)/sizeof(int);
	cout<<"sum of arr is " <<sumofarr(arr,n)<<endl;
	cout<<"sum of arr is " <<sumofarr2(arr,n)<<endl;
	cout<<"sum of arr is " <<sumofarr3(arr,n,0)<<endl;



	return 0;
}