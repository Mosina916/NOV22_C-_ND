#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;

	int rowno=1;
	while(rowno<=n){
		// nos
		for(int st=1;st<=rowno;st++){
			cout<<'*';

		}


		// spaces
		for(int sp=1;sp<=(2*n)-(2*rowno);sp++){
			cout<<' ';

		}



		// nos
		for(int stt=1;stt<=rowno;stt++){
			cout<<'*';

		}




		rowno=rowno+1;
		cout<<endl;
	}

	return 0;
}