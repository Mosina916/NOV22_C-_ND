#include<iostream>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
		ans=ans*i;

	}
	return ans;
}

// void f(){
// 	cout<<"hi"<<endl;
// 	cout<<"hello"<<endl;
// }
int main(){
	// f();
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}