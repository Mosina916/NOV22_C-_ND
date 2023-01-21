#include <iostream>
using namespace std;
int main(){
	// char ch='T';

	// cout<<ch<<endl;//T
	// cout<<sizeof(ch)<<endl;//1
	// cout<<sizeof(&ch)<<endl;//8
	// cout<<&ch<<endl;//value at the bucket 

	// char ch1='Y';

	// cout<<ch1<<endl;//y
	// cout<<sizeof(ch1)<<endl;//1
	// cout<<sizeof(&ch1)<<endl;//8
	// cout<<&ch1<<endl;//value sbat the bucket till we get null 

	// FOOLING OF COMPILER
	char ch='T';
	// cout<<(int*)&ch<<endl;//value at the bucket
	// cout<<(float*)&ch<<endl;//value at the bucket
	// cout<<(double*)&ch<<endl;//value at the bucket
	// cout<<(bool*)&ch<<endl;//value at the bucket
	cout<<(char*)&ch<<endl;


	return 0;
}