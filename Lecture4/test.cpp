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

// rowno =4
	// lower half

	while(rowno<=n){
		// spaces
	int spaceco=1;
	while(spaceco<=rowno-((n+1)/2)){
		cout<<' ';
		spaceco=spaceco+1;

	}

	// stars
	int starco=1;
	while(starco<=(n-rowno)*2+1){
		cout<<'*';
		starco=starco+1;
	}

	cout<<endl;
	rowno=rowno+1;


	}








	return 0;
}