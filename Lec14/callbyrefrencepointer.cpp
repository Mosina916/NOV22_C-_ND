#include<iostream>
using namespace std;
// int*ptr=&a;
void fun(int*ptr){ 
	*ptr=*ptr+10;
	cout<<*ptr<<endl;//99

}
int main(){
	int a=89;
	cout<<a<<endl;//89
	// cout<<&a<<endl;
	fun(&a);
	cout<<a<<endl;//99



	return 0;
}









