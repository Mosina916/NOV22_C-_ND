#include<iostream>
using namespace  std;
				// 0	1	2		3		4		5	6		7		8		9
string arr[]={"Zero","one","two","three","four","five","six","Seven","eight","Nine"};
void ntowordformrev(int n){//0
	// base case
	if(n==0){
		return;

	}
	// rec case
	int x=n%10;//6 1 2 3
	cout<<arr[x]<<" "; //six one two three
	ntowordformrev(n/10);//3/10
}

void ntowordform(int n){//321 32 3
	// base case
	if(n==0){
		return;

	}
	// rec case
	ntowordform(n/10);//
	int x=n%10;//1
	cout<<arr[x]<<" "; //three two one
	
}
int main(){
	int n;
	cin>>n;//3216-->six one two three

	ntowordformrev(n);
	cout<<endl;
	ntowordform(n);//3216-->three two one six

	
	


	return 0;
}