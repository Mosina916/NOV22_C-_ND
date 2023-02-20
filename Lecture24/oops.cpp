#include<iostream>
using namespace std;
class car{
	// public:
	string name;
	int price;
	// public:
	int seats;
	string color;
// default constructor
	// car(){
	

	// }

	// car(){
	// 	cout<<"hello"<<endl;

	// }

};

int main(){
	car x;//whenever object is created constructor is called
	car y;
	x.name="BMW";
	x.price=4643;
	x.color="white";
	x.seats=5;

	cout<<x.name<<endl;
	cout<<x.price<<endl;
	cout<<x.color<<endl;
	cout<<x.seats<<endl;







	return 0;
}