#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){


	// inc  -->*
	char stval='A';
	int stc=1;
	while(stc<=n-rowno+1){
		// cout<<'*';
		cout<<stval;//ABCDE
		// stval=stval+1;//F
		stval++;
		stc++;
	}
	// dec -->#
	stval=stval-1;//E

	int hc=1;
	while(hc<=n-rowno+1){
		// cout<<'#';
		cout<<stval;
		stval=stval-1;
		hc++;
	}

	cout<<endl;
	rowno++;

	}


	// for 1 row




	






	return 0;
}