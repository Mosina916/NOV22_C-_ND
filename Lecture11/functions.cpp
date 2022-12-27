#include<iostream>
using namespace std;
// return type nameofcontainer(){
// 	// task;
// }
// no return no arguments
void statements(){
	cout<<"hello"<<endl;
	cout<<"hii"<<endl;
	cout<<"cat"<<endl;

}
// return with no arguments
int sumofnumbers(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	// cout<<sum<<endl;
	return sum;

}
// return type nameofcontainer(datatype name,datatype name,.....){
// 	// task;
// }
// return with arguments
float multiply(int num1,float num2){
	float mul=num1*num2;
	cout<<mul;
	return mul;

}
// no return with arguments
void division(int num1,int num2){
	float div=num1/num2;
	cout<<div<<endl;
}

void division(int num1,int num2);

void main(){
	division();
	// cout<<sumofnumbers()<<endl;
	// statements();
	// // int a,b;
	// // cin>>a>>b;
	// // int sum=a+b;
	// // cout<<sum<<endl;
	// cout<<sumofnumbers()<<endl;
	
	// int c;
	// float d;
	// cin>>c>>d;//3 4.2
	// cout<<multiply(c,d)<<endl;



	// cin>>a>>b;
	// sum=a+b;
	// cout<<sum<<endl;

	// cin>>a>>b;
	// int sum=a+b;
	// cout<<sum<<endl;

	// cin>>a>>b;
	// int sum=a+b;
	// cout<<sum<<endl;

	// for(int i=0;i<=4;i++){
	// 	cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"cat"<<endl;

	// }

	// cout<<1<<endl;
	// // cout<<"hello"<<endl;
	// // cout<<"hii"<<endl;
	// // cout<<"cat"<<endl;
	// // conatinername();
	// cout<<34.54<<endl;

	// cout<<1<<endl;
	// statements();
	// cout<<34.54<<endl;

	// cout<<1<<endl;
	// cout<<34.54<<endl;
	// statements();
	// cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"cat"<<endl;


	// cout<<"hello"<<endl;
	// cout<<"hii"<<endl;
	// cout<<"cat"<<endl;
	// statements();
	// cout<<1<<endl;
	// cout<<34.54<<endl;


	

	
	return 0;
}


void division(int num1,int num2){
	float div=num1/num2;
	cout<<div<<endl;
}