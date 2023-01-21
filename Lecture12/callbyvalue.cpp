#include<iostream>
using namespace std;
void fact(int n){
	n=n+80;
	cout<<n<<endl;
	
}
int main(){
	int n;
	cin>>n;
	cout<<n<<endl;
	fact(n);
	cout<<n<<endl;
	return 0;
}