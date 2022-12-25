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


	// for(int i=1;i<=n-1;i++){
	// 	for(int j=0;j<=n-1-i;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		// swap(arr[j],arr[j+1]);
	// 		// using 3rd variable
	// 		// int c=a; //a-->arr[j] b-->arr[j+1]
	// 		// a=b;
	// 		// b=c
	// 		// int c=arr[j];
	// 		// arr[j]=arr[j+1];
	// 		// arr[j+1]=c;


	// 		// b=a+b;
	// 		// a=b-a;
	// 		// b=b-a;
	// 		// without using 3rd variable
	// 		// arr[j+1]=arr[j]+arr[j+1];
	// 		// arr[j]=arr[j+1]-arr[j];
	// 		// arr[j+1]=arr[j+1]-arr[j];

	// 		// a=a+b;
	// 		// b=a-b;
	// 		// a=a-b;

	// 		// swap in a single line
	// 		// a=(a+b)-(b=a);
	// 		arr[j]=(arr[j]+arr[j+1])-(arr[j+1]=arr[j]);
	// 		// b=(a+b)-(a=b);





	// 	}
	// }

	// }

	// print array
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	
	


	

	// // for(int j=0;j<=3;j++){
	// // 	if(arr[j]>arr[j+1]){
	// // 		swap(arr[j],arr[j+1]);
	// // 	}
	// // }

	// // 4 3 2 1 5
	// for(int j=0;j<=2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }
	// // 3 2 1 4 5
	// for(int j=0;j<=1;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }
	//  // 2 1 3 4 5

	// for(int j=0;j<=0;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// print array
	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;




	return 0;
}