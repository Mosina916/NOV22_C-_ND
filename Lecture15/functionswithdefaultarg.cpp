#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	int ans=a+b;
// 	return ans;
// }
// int sum(int a,int b,int c){
// 	int ans=a+b+c;
// 	return ans;
// }
// int sum(int a,int b,int c,int f){
// 	int ans=a+b+c+f;
// 	return ans;
// } 

int sum(int a=0,int b=0,int c=0,int d=0,int e=0){
	int ans=a+b+c+d+e;
	return ans;
} 
// functions with default arguments
int multp(int a=1,int b=1,int c=1,int d=1,int e=1){
	int ans=a*b*c*d*e;
	return  ans;
}
int main(){
	cout<<sum(3,4)<<endl;
	cout<<sum(3,4,6)<<endl;
	cout<<sum(3,4,6,1)<<endl;

	cout<<multp(3,4)<<endl;
	// multp(3,4,2);
	// multp(3,2,2,3);



	return 0;
}