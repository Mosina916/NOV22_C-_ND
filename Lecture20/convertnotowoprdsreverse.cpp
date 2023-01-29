#include<iostream>
using namespace std;
bool check7presentornot(int arr[],int n){
	// base case
	if(n==0){
		return false;
	}
	// /rec case
	if(arr[0]==7){
		return true;

	}
	return check7presentornot(arr+1,n-1);

}
int main(){
	int arr[]={3,4,7,2,7,8,7};
	int n=sizeof(arr)/sizeof(int);
	if(check7presentornot(arr,n)==true){
		cout<<"7 is present"<<endl;
	}
	else{
		cout<<"7 is not present"<<endl;

	}



	return 0;
}