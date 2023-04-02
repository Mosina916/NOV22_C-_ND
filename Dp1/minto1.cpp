#include<iostream>
// #incl
using namespace std;
int minstepsto1(int n){//10
	// base case
	if(n==1){
		return 0;
	}
	// /rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1(n-1);//5
	if(n%2==0){
		y=minstepsto1(n/2);//3
	}
	if(n%3==0){
		z=minstepsto1(n/3);//2
	}
	return min(x,min(y,z))+1;

}

int minstepsto1td(int n,int*arr){//10
	// base case
	if(n==1){
		return arr[n]=0;
	}
	// check
	if(arr[n]!=-1){
		return arr[n];
	}
	// /rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepsto1td(n-1,arr);//5
	if(n%2==0){
		y=minstepsto1td(n/2,arr);//3
	}
	if(n%3==0){
		z=minstepsto1td(n/3,arr);//2
	}
	return arr[n]=min(x,min(y,z))+1;

}


// bottomup
int bottomup(int n){
	int*arr=new int[n+1];
	arr[1]=0;
	for (int i = 2; i <=n; ++i)
	{
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
		x=arr[i-1];
		if(i%2==0){
			y=arr[i/2];
		}
		if(i%3==0){
			z=arr[i/3];
		}
		arr[i]=min(x,min(y,z))+1;
	}


	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	return arr[n];
}


int main(){
	int n;
	cin>>n;
	// cout<<minstepsto1(n)<<endl;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<"td "<<minstepsto1td(n,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	cout<<"Bu " <<bottomup(n)<<endl;
	cout<<"SR "<<minstepsto1(n)<<endl;



	return 0;
}