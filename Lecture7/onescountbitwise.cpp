#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;//13-->1101&1

	int co=0;
	while(n!=0){
		if((=n&1)=1){
			co++;

		}
		n=n>>1;

	}

	cout<<"no of 1's are "<<co<<endl;



	return 0;
}