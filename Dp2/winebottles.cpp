#include<iostream>
using namespace std;
// 2d dp
int winesmaxprofit(int wines[],int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}
	// rec case
	int op1=wines[l]*day+winesmaxprofit(wines,l+1,r,day+1);
	int op2=wines[r]*day+winesmaxprofit(wines,l,r-1,day+1);
	return max(op1,op2);

}

int winesmaxprofittd(int wines[],int l,int r,int day,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}
	// rec case
	int op1=wines[l]*day+winesmaxprofittd(wines,l+1,r,day+1,arr);
	int op2=wines[r]*day+winesmaxprofittd(wines,l,r-1,day+1,arr);
	return arr[l][r]=max(op1,op2);

}

int bottomup(int wines[],int l,int r,int n){
	int arr[100][100]={0};

 // /diagonal fill
	for(int i=0;i<n;i++){
		arr[i][i]=n*wines[i];
	}

	// l-->i
	// r-->j

	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(j>i){
				int day=n-(j-i);
				int op1=day*wines[i]+arr[i+1][j];
				int op2=day*wines[j]+arr[i][j-1];
				arr[i][j]=max(op1,op2);
			}
		}
	}


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<'\t';
		}

		cout<<endl;
	}



	return arr[l][r];






}
int main(){
	int wines[]={2,3,5,1,4};
	int n=sizeof(wines)/sizeof(int);
	cout<<bottomup(wines,0,n-1,n)<<endl;
	// int **arr=new int*[n];
	// for(int i=0;i<n;i++){
	// 	arr[i]=new int[n];
	// }
	cout<<winesmaxprofit(wines,0,n-1,1)<<endl<<endl;
	int arr[100][100];
	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			arr[i][j]=-1;
		}
	}


	cout<<winesmaxprofittd(wines,0,n-1,1,arr)<<endl<<endl;


	return 0;
}