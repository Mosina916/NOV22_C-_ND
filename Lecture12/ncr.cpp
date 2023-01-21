#include<iostream>
using namespace std;
// int fact(int n){
// 	int ans=1;
// 	for(int i=n;i>=1;i--){
// 		ans=ans*i;

// 	}
// 	return ans;
// }
int fact(int n);
int ncr(){
	int n,r;
	cin>>n>>r;
	int fans=fact(n)/(fact(r)*fact(n-r));
	return fans;
}
int fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
		ans=ans*i;

	}
	return ans;
	// return 0;
}
int main(){
	// int 10=x;
	// f();
	cout<<ncr()<<endl;
	return 0;
}