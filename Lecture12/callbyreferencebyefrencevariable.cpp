#include<iostream>
using namespace std;
// datatype& newname=oldname
void f(int &n){
	n=n+90;
	cout<<n<<endl;
	
}

int main(){
	int x;
	cin>>x;
	// int p=x;
	cout<<x<<endl;
	f(x)
	cout<<x<<endl;
	
	return 0;
}