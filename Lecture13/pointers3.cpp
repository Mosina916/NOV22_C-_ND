#include <iostream>
using namespace std;
int main(){
	
	// // datatype* namebucket
	int a=10;
	int*aptr=&a;
	int**apptr=&aptr;//double pointer
	int***tptr=&apptr;//triple pointer
	cout<<*(tptr)<<endl;//aaptr
	cout<<apptr<<endl;
	cout<<*(*(tptr))<<endl;//aptr
	cout<<aptr<<endl;
	cout<<*(*(*(tptr)))<<endl;//a
	cout<<a<<endl;










	return 0;
}