#include<iostream>
using namespace  std;
bool isarraysorted3(int arr[],int n,int i){
	// base case
	if(i==n-1){
		return true;
	}



	// rec case
	if(arr[i]<=arr[i+1] and isarraysorted3(arr,n,i+1)){
		return true;
	}
	return false;
}
int main(){
	int arr[]={3,15,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysorted3(arr,n,0)==true){
		cout<<"array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;

	}


	return 0;
}