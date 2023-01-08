#include<iostream>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
		ans=ans*i;

	}
	// cout<<ans<<endl;
	return ans;
}

int main(){
	// 5!=5*4*3*2*1
	// 5!=1*2*3*4*5
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	// int ans=1;
	// for(int i=n;i>=1;i--){
	// 	ans=ans*i;

	// }
	// cout<<ans<<endl;

	// int i=5;
	// while(i>=1){
	// 	ans=ans*i;
	// 	i--;

	// }

	



	

	
	return 0;
}