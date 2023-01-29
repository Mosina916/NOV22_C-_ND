#include<iostream>
using namespace std;
bool check7presentornot(int arr[],int n){
	// base case
	if(n==0){
		return false;
	}
	// /rec case
	// if(arr[0]==7){
	// 	return true;

	// }
	return arr[0]==7 || check7presentornot(arr+1,n-1);

}
// 3 5 4 5
int firstindexof7(int arr[],int n ,int i){
	// base case
	if(i==n){
		return -20;

	}
	// rec case
	if(arr[i]==7){
		return i;

	}
	return firstindexof7(arr,n,i+1);
}
// 3 4 2 1
// int lastindexof7(int arr[],int n ,int i){
// 	// base case
// 	if(i==-1){
// 		return -3;
// 	}
	
// 	// rec case
// 	if(arr[i]==7){
// 		return i;

// 	}
// 	return lastindexof7(arr,n,i-1);
// }


int lastindexof7(int arr[],int n ,int i){
	// base case
	if(i==-1){
		return -3;
	}
	
	// rec case
	// if(arr[i]==7){
	// 	return i;

	// }
	if(arr[i]==7||lastindexof7(arr,n,i-1)){
		return i;
	}

}
// void allindicesof7(int arr[],int n,int i){
// 	// base case
// 	if(i==n){
// 		return;
// 	}
// 	// rec case
// 	if(arr[i]==7){
// 		cout<<i<<" ";//0

// 	}
// 	allindicesof7(arr,n,i+1);
// }
int main(){
	int arr[]={7,7,4,2,7,8};
	// int arr[]={3,4,2,8};
	int n=sizeof(arr)/sizeof(int);//-10
	// allindicesof7(arr,n,0);
	// int indx=lastindexof7(arr,n,n-1);
	// if(indx<0){
	// 	cout<<"7 is not present"<<endl;

	// }
	// else{
	// 	cout<<"7 is present at last index "<<indx<<endl;


	// }

	// int indx=firstindexof7(arr,n,0);//2
	// if(indx<0){
	// 	cout<<"7 is not present"<<endl;

	// }
	// else{
	// 	cout<<"7 is present at index "<<indx<<endl;


	// }
	// if(check7presentornot(arr,n)==true){
	// 	cout<<"7 is present"<<endl;
	// }
	// else{
	// 	cout<<"7 is not present"<<endl;

	// }



	return 0;
}