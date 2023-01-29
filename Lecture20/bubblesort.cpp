#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,5,4,4,3,2,0,-2,4,3,2,1};

	// int arr[]={5,4,3,2,1};
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);//5

	for(int i=0;i<=n-2;i++){
		cout<<i<<endl;
		for(int j=0;j<=n-2-i;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}

	}

	// print array
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	

	return 0;
}