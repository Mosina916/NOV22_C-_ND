#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	// if(ch=='A'){
	// 	cout<<"apple"<<endl;

	// }
	// else if(ch=='B'){
	// 	cout<<"Boy"<<endl;

	// }
	// else if(ch=='C'){
	// 	cout<<"cat"<<endl;

	// }
	// else if(ch=='D'){
	// 	cout<<"dog"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }


	switch(ch){
		case 'A':cout<<"apple"<<endl;
		break;
		case 'B':cout<<"Boy"<<endl;
		break;
		case 'C':cout<<"cat"<<endl;
		break;
		case 'D':cout<<"dog"<<endl;
		break;
		default:cout<<"some other character"<<endl;
	}


	return 0;
}