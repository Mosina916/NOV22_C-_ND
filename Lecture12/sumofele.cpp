#include<iostream>
using namespace std;
// datatype& newname=oldname
void sumofarr(int arr[],int n){ //11 12 13 14
	int sum=0;
	for(int i=0;i<=n-1;i++){
		sum=sum+arr[i];
		
	}

	cout<<sum<<endl;

	
}

int main(){
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(int);
	
	sumofarr(arr,n);
	

	
	return 0;
}