#include<iostream>
using namespace std;
// datatype& newname=oldname
void f(int b[]){ //11 12 13 14
	for(int i=0;i<=3;i++){
		b[i]=b[i]+10;
	}

	for(int i=0;i<=3;i++){
		cout<<b[i]<<" ";//11 12 13 14
	}
	cout<<endl;


	
}

int main(){
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<" ";//1 2 3 4
	}
	cout<<endl;

	f(arr);
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<" ";//11 12 13 14
	}
	cout<<endl;

	
	return 0;
}