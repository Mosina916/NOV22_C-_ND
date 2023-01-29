#include<iostream>
using namespace  std;
int mult(int a,int b){//3 0
	// base case
	if(b==0){
		return 0;
	}
	// if(b==1){
	// 	return a;
	// }

	// rec case
	return a+mult(a,b-1);//3+3+3 3,-3
	

}
int main(){
	int a,b;
	cin>>a>>b;
	if(a>=0 and b>=0){
		cout<<mult(a,b)<<endl;//3 0

	}
	else if(a<0 and b>=0){
		cout<<(-1*mult(abs(a),b))<<endl;//3 0


	}
	else{
		

	}
	


	return 0;
}