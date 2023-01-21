#include<iostream>
using namespace std;
void fun(int p[],int n){
	for (int i = 0; i <n; ++i)
	{
		p[i]=p[i]+10;
	}

	for (int i = 0; i <n; ++i)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={3,2,4,5};
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	fun(arr,n);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	






	return 0;
}