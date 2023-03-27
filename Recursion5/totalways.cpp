#include <iostream>
#include<cmath>
using namespace std;
int totalways(int m,int n){
	// base case
	if(m==0 ||n==0){
		return 1;
	}


	// rec case
	return totalways(m-1,n)+totalways(m,n-1);
}
int main(){
	int m,n;
	cin>>m>>n;//m -->rows n-->cols
	cout<<totalways(m,n)<<endl;


	return 0;
}