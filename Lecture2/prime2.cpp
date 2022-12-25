#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		return 0;

	}
	int i=2;
	while(i<=n-1){
		if(n%i==0){
			cout<<"Not prime"<<endl;
			return 0;
		}
		i=i+1;
	}

	cout<<"prime"<<endl;



	

	return 0;
}