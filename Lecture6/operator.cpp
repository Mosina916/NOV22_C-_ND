#include <iostream>
using namespace std;
int main(){
	int a=2,b=1,c=0,d=-1,e=40;
	if(a++ and ++b and c-- and d--){
		cout<<"hello"<<endl;
	}
	else if(e-- and ++c and b--){
		cout<<"coding "<<endl;

	}
	else if(++b and ++d and c--){
		cout<<"world"<<endl;
	}
	else{
		cout<<"blocks"<<endl;
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;
}