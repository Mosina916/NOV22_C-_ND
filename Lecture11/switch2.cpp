#include<iostream>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age==20){
		cout<<"apple"<<endl;

	}
	else if(age==30){
		cout<<"Boy"<<endl;

	}
	else if(age==34){
		cout<<"cat"<<endl;

	}
	else if(age==22){
		cout<<"dog"<<endl;

	}
	else{
		cout<<"some other character"<<endl;
	}


	switch(age){
		case 20:cout<<"apple"<<endl;
		break;
		case 30:cout<<"Boy"<<endl;
		break;
		case 34:cout<<"cat"<<endl;
		break;
		case 22:cout<<"dog"<<endl;
		break;
		default:cout<<"some other character"<<endl;
	}


	return 0;
}