#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	int nostart=1;
	while(rowno<=n){
		// 1 row ka kaam
		
	int count=1;
	while(count<=rowno){ 
		// cout<<'*';
		cout<<nostart<<'	';
		nostart=nostart+1;
		count=count+1;
	}
	cout<<endl;
	rowno=rowno+1;


	}


	


	return 0;
}