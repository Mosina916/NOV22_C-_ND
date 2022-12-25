//     1
//    123
//   12345
//  1234567
// 123456789
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){
		// for 1 row

	// spaces
	int spc=1;
	while(spc<=n-rowno){
		cout<<" "<<'\t';
		spc=spc+1;
	}

	// stars
	int stno=1;
	int stc=1;
	while(stc<=2*rowno-1){
		// cout<<"*";
		cout<<stno<<'\t';
		stno=stno+1;
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;


	}

	

	return 0;
}