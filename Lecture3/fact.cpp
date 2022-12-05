#include <iostream>
using namespace std;
int fact(int n){//5

	// base case
	if(n==0){
		return 1;
	}
	// recursive case
	return n*fact(n-1);
	// int chotaans=fact(n-1);//24
	// int finalans=n*chotaans;
	// return finalans;

}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;


	return 0;
}