#include<iostream>
using namespace std;
void mergetwosortedarrays(int a[],int b[],int n,int m){

	int i=0;
	int j=0;
	int k=0;
	int temp[10000];
	while(i<=n-1 and j<=m-1){
		if(a[i]<b[j]){
			temp[k]=a[i];
			k++;
			i++;
			// temp[k++]=a[i++];
		}
		else{
			temp[k]=b[j];
			k++;
			j++;
		}
	}
	// b wali array ko copy karo
	while(j<=m-1){
		temp[k]=b[j];
		j++;
		k++;
	}
	// a wali array ko copy karo b khatam hoagyi hai
	while(i<=n-1){
		temp[k]=a[i];
		i++;
		k++;
	}

	for(int i=0;i<=m+n-1;i++){
		cout<<temp[i]<<" ";
	}
	cout<<endl;


}

int main(){
	int a[]={3,9,15,16};
	int n=4;
	int b[]={1,4,6,9,11};
	int m=5;
	mergetwosortedarrays(a,b,n,m);
	

	return 0;
}