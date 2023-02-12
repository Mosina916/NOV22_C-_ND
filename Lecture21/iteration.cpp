#include<iostream>
using namespace std;
bool isarraysorted(int arr[],int n,int i){
	// base case
	if(i==n-1){
		return true;
	}


	// rec case

	if(arr[i]<=arr[i+1] and isarraysorted(arr,n,++i)){
		return true;
	}
	return false;


}	
int main(){
	int arr[]={3,2,4,5,1};
	int n=sizeof(arr)/sizeof(int);
	if(isarraysorted(arr,n,0)==true){
		cout<<"sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;
	}
	

	return 0;
}