#include<iostream>
using namespace std;
#define c '\0'
int main(){
	// int arr1[]={1,2,3,4};
	// cout<<arr1<<endl;
	// ABC
	// DOGABC
	// char arr[]={'A','B','C'};
	// char arr[]={'A','B','C','\0'};
	// char arr[4]={'A','B','C','\0'};
	// char arr[4]="ABC";
	// char arr[]="ABC";

	// cout<<arr<<endl;
	// char arr2[]={'D','O','G','\0'};
	// cout<<arr2<<endl;		
	// print karane ka 1 way is 

	// int n=sizeof(arr)/sizeof(char);//3
	char arr[100];
	// cin>>arr;
	
	// cin.getline(arrananem,arraysize);
	// cin.getline(arrananem,arraysize,delimiter);
	// cin.getline(arr,100);//by default delimiter is '\n'
	// cin.getline(arr,100,'$');
	// cin.getline(arr,100,' ');
	cin.getline(arr,100,c);
	cout<<arr<<endl;

	// int n;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>arr[i];
	// }
	// cout<<endl;

	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	
	
	return 0;
}









