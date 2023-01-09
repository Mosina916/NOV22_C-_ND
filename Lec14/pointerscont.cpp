#include<iostream>
using namespace std;
int main(){
	// int arr[]={3,2,4,5};
	// cout<<&arr[0]<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;
	// cout<<&arr[3]<<endl;

	// cout<<&arr[0]<<endl;
	// cout<<arr<<endl;
	// // &arr[0] is same as arr
	// cout<<arr+1<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<arr+2<<endl;
	// cout<<&arr[2]<<endl;

	// int arr[]={3,2,4,5};
	// cout<<arr[0]<<endl;
	// cout<<*(arr+0)<<endl;

	// cout<<arr[1]<<endl;//2
	// cout<<*(arr+1)<<endl;

	// cout<<arr[2]<<endl;//2
	// cout<<*(arr+2)<<endl;

	int arr[100];

	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		// cin>>arr[i];
		cin>>*(arr+i);
	}

	for (int i = 0; i <n; ++i)
	{
		//cout<<arr[i]<<" ";
		cout<<*(arr+i)<<" ";
	}







	return 0;
}