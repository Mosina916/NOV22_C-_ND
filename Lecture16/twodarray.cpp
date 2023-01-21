#include<iostream>
using namespace std;
int main(){
	// initilization of 2d array
	int arr[]={1,2,3,4,5};


	// datatype nameofarr[rows][cols];
	// int arr[3][4]={
	// 	{2,4,3,5},
	// 	{3,1,9,8},
	// 	{7,4,6,2}
	// };
	int arr[][4]={
		{2,4,3,5},
		{3,1,9,8},
		{7,4,6,2}
	};

	// cout<<arr[0]<<endl;
	cout<<&arr[0][0]<<endl;//2
	cout<<&arr[0][1]<<endl;//4
	cout<<&arr[0][2]<<endl;//3
	cout<<&arr[0][3]<<endl;//5
	cout<<&arr[1][0]<<endl;//3
// 0x7ff7bf431940
// 0x7ff7bf431944
// 0x7ff7bf431948
// 0x7ff7bf43194c
// 0x7ff7bf431950
	



	// for(int i=0;i<=2;i++){
	// 	for(int j=0;j<=3;j++){
	// 	cout<<arr[i][j]<<" ";
	// }
	// cout<<endl; //nested loop

	// }



	// 	cout<<arr<<endl;//2 wali bucket ka address
	// cout<<&arr[0][0]<<endl;
	// cout<<&arr[0]<<endl;


	// cout<<&arr[1][0]<<endl;
	// cout<<&arr[1]<<endl;

	// cout<<&arr[2][0]<<endl;
	// cout<<&arr[2]<<endl;



	


	// row 0
	/*for(int j=0;j<=3;j++){
		cout<<arr[0][j]<<" ";
	}
	cout<<endl;*/

	// row 1
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[1][j]<<" ";
	// }
	// cout<<endl;

	// row 2
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[2][j]<<" ";
	// }
	// cout<<endl;


	return 0;
}