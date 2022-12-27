#include<iostream>
using namespace std;
int main(){
	// int arr[]={4,-2,-3,4,5,3,3,33,2,2,1,1,2,3,3,2,2,2,12,3,0,1,2};
	int arr[]={4,3,5};
	int n=sizeof(arr)/sizeof(int);
	int i;
	for(int j=1;j<=n-1;j++){
		int ele=arr[j];
		// int i;
		for(i=j-1;i>=0;i--){
			if(ele<arr[i]){
				// arr[i+1]=arr[i];
				swap(ele,arr[i]);
			}
			else{
				break;
			}
		}
		arr[i+1]=ele;
	}


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}