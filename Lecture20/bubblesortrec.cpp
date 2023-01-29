#include<iostream>
using namespace std;
// void bubblesortrec(int arr[],int n,int i){
// 	// base case
// 	if(i==n-1){
// 		return;
// 	}



// 	// rec case
// 	for(int j=0;j<=n-2-i;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// 	// 4 3 2 1 5
// 	bubblesortrec(arr,n,i+1);


// }

void bubblesortpurerec(int arr[],int n,int i,int j){
	// base case
	if(i==n-1){
		return;
	}
	// rec case
	if(j==n-1-i){
		bubblesortpurerec(arr,n,i+1,0);
	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortpurerec(arr,n,i,j+1);

	}
	
}
int main(){
	// int arr[]={3,5,4,4,3,2,0,-2,4,3,2,1};

	// int arr[]={5,4,3,2,1};
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);//5

	bubblesortpurerec(arr,n,0,0);

	// bubblesortrec(arr,n,0);

	// // print array
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	

	return 0;
}