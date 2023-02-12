// dma
#include<iostream>
using namespace std;
int main(){
	// sma
	// int a;
	// a=10;
	// dma
	// int *ptr=new int;
	// *ptr=10;

	// cout<<*ptr<<endl;

	// float*fptr=new float;
	// *fptr=7.564;
	// cout<<*fptr<<endl;

	// // delete pointername;
	// delete fptr;
	// fptr=NULL;


	// arrays
	// int arr[100];//sma
	// cout<<arr;

	// dma
	// arr[i]
	// ptr[i]
	// int *ptr=new int[100];

	// int*n=new int;
	// cin>>*n;

	// for (int i = 0; i <*n; ++i)
	// {
	// 	cin>>ptr[i];
	// }

	// for (int i = 0; i <*n; ++i)
	// {
	// 	cout<<ptr[i]<<" ";
	// }
	// cout<<endl;


	// delete []ptr;
	// delete n;
	// ptr=NULL;
	// n=NULL;


	// 2d array
	// sma
	// int arr[3][4];

	// dma
	 int **arr=new int*[3];
	 for(int i=0;i<=2;i++){
	 	arr[i]=new int[4];
	 }

	 for(int i=0;i<=2;i++){
	 	for(int j=0;j<=3;j++){
	 		cin>>arr[i][j];
	 	}
	 }

	 for(int i=0;i<=2;i++){
	 	for(int j=0;j<=3;j++){
	 		cout<<arr[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }
	 cout<<endl;




	  for(int i=0;i<=2;i++){
	 	delete [] arr[i];
	 	arr[i]=NULL;
	 }


	 delete[]arr;
	 arr=NULL;
















	








	return 0;
}