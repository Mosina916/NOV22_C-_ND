#include<iostream>
using namespace std;
// arr[]=3 27 38 43 9 10 82
void mergetwosortedarrays(int arr[],int s,int e){//0 6

	int i=s;//0
	int mid=(s+e)/2;//3
	int j=mid+1;//4
	// int k=0;
	int k=s;//0
	int temp[10000];
	// temp-->0 1 2 3 4 5 6 7 8 
		   // 3 9 10 27 38 43 82
	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			k++;//1 
			i++;//1
			// temp[k++]=a[i++];
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	// b wali array ko copy karo
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}
	// a wali array ko copy karo b khatam hoagyi hai
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}


	// copy temp ko arr mai 

	for(int l=s;l<=e;l++){
		arr[l]=temp[l];
	}




}
// arr[]=3 27 38 43 9 10 82
void mergesort(int arr[],int s,int e){
	// BASE CASE
	if(s==e){
		return;
	}


	/*rec case*/
	int mid=(s+e)/2;//0+6/2-->3
	mergesort(arr,s,mid);//38,27,43,3-->3 27 38 43
	mergesort(arr,mid+1,e);//9,82,10-->9 10 82
	mergetwosortedarrays(arr,s,e);


}

int main(){
	int arr[]={38,27,43,3,9,82,10};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	

	return 0;
}