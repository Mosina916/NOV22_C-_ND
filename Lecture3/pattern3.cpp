#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){

		// 1 row ka kaam

	// spaces 
	int spc=1;
	while(spc<=n-rowno){
		cout<<' ';
		spc=spc+1;
	}

	// stars
	int stc=1;
	while(stc<=rowno){
		cout<<'*';
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}
	
	


	return 0;
}