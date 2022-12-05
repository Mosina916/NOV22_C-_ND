#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// upper half
	int rowno=1;
	while(rowno<=(n+1)/2){
		// for 1 row
	// spaces
	int spc=1;
	while(spc<=((n+1)/2)-rowno){
		cout<<' ';
		spc=spc+1;
	}

	// stars
	int stc=1;
	while(stc<=2*rowno-1){
		cout<<'*';
		stc=stc+1;

	}
	cout<<endl;
	rowno=rowno+1;

	}

rowno =1;
	// lower half

	while(rowno<=(n-1)/2){
		// spaces
	int spaceco=1;
	while(spaceco<=rowno){
		cout<<' ';
		spaceco=spaceco+1;

	}

	// stars
	int starco=1;
	while(starco<=n-(2*rowno)){
		cout<<'*';
		starco=starco+1;
	}

	cout<<endl;
	rowno=rowno+1;


	}








	return 0;
}