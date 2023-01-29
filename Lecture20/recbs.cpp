#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
	// base case
	if(s>e){
		return -3;
	}
	// rec case
		int mid=(s+e)/2;
		if(key==arr[mid]){
			return mid;
		}
		else if(key<arr[mid]){
			return binarysearch(arr,s,mid-1,key);

		}
		else{
			return binarysearch(arr,mid+1,e,key);
		}
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	int x=binarysearch(arr,0,n-1,key);
	if(x<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<x<<endl;

	}
	

	return 0;
}