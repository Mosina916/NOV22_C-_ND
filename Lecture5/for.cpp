//     1
//    232
//   34543
//  4567654
// 567898765		

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int rowno=1;rowno<=n;rowno=rowno+1){

	// while(rowno<=n){
		// for  1 row

	// spaces
	// int spc=1;
	// while(spc<=n-rowno){
		// cout<<' '<<'\t';
		// spc=spc+1;
	// }
	for(int spc=1;spc<=n-rowno;spc=spc+1){
		cout<<' '<<'\t';

	}
	// ' '4567

	// stars
	int stno=rowno;//4
	// int stc=1;
	// while(stc<=rowno){//5<=4
		// cout<<'*';
		
		// stc=stc+1;//5

	// }
		for(int stc=1;stc<=rowno;stc=stc+1){
			cout<<stno<<'\t';
		stno=stno+1;//8

		}

	int hstno=stno-2;

	// hash
	// int hc=1;
	// while(hc<=rowno-1){
		// cout<<'#';
		// cout<<hstno<<'\t';
		// hstno=hstno-1;

		// hc=hc+1;
	// }
	for(int hc=1;hc<=rowno-1;hc=hc+1){
		cout<<hstno<<'\t';
		hstno=hstno-1;

	}
	cout<<endl;


	}
	
	// rowno=rowno+1;




	










	

	

	return 0;
}