#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;//5-->101-->2
	// convert n to its binary


	int p=0;
	int ans=0;
	while(n!=0){
		int rem=n%2;
		ans=ans+rem*pow(10,p);
		p++;
		n=n/2;

	}

	cout<<ans<<endl;//1101

	// count 1's in ans-->3
	int cou=0;

// loop
	while(ans!=0){
		int val=ans%10;//1
	if(val==1){
		cou++;//3
	}
	ans=ans/10;//0

	}


	cout<<cou<<endl;
	








	return 0;
}