#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
	while(s<=e){
		int mid=(s+e)/2;
		if(key==arr[mid]){
			return mid;
		}
		else if(key<arr[mid]){
			e=mid-1;

		}
		else{
			s=mid+1;
		}
	}
	return -3;

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