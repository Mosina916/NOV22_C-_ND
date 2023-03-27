#include<iostream>
using namespace std;
int main(){
	// sma
	int x;
	x=10;

	// dma
	int*aptr=new int;
	*aptr=10;
	cout<<*aptr<<endl;


	// delete keyword
	// delete a variable
	// delete pointername;
	delete aptr;//free the memory that is pointed by aptr
	aptr=NULL;

	// cout<<*aptr<<endl;


	// float f;
	// f=89.34;
	float*fptr=new float;
	*fptr=89.34;
	cout<<*fptr<<endl;
	delete fptr;
	fptr=NULL;









	return 0;
}