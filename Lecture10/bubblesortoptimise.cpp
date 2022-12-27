#include<iostream>
using namespace std;
int main(){
	// int arr[]={5,4,3,2,1};
	int arr[]={5,1,2,3,4};
	// int arr[]={1,2,3,4,5};
	// int arr[]={5,4,3,1,2};
	// 4 3 1 2 5
	// 3 1 2 4 5
	// 1 2 3 4 5
	int n=sizeof(arr)/sizeof(int);//5
	for(int i=1;i<=n-1;i++){
		cout<<i<<endl;
		bool kyaekbbaarswaphuva=false;
		for(int j=0;j<=n-1-i;j++){
		if(arr[j]>arr[j+1]){

			swap(arr[j],arr[j+1]);
			kyaekbbaarswaphuva=true;
		}
	}
		if(kyaekbbaarswaphuva==false){
			break; 
		}
	}
	// 1 2 3 4 5

	

	// print array
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;





	return 0;
}