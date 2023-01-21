#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int trows,tcols;
	cin>>trows>>tcols;//3 4

	for(int i=0;i<=trows-1;i++){
		for(int j=0;j<=tcols-1;j++){
		cin>>arr[i][j];
	}

	}




	// print 2dint mai
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl; //nested loop

	}






	return 0;
}