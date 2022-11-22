#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//read n
	int num;
	cin>>num;

	int max=num;


	int coun=1;
	while(coun<=n-1){
		cin>>num;
	
		
		// max ka kaam
		if(num>max){
			max=num;
		}
		coun=coun+1;
	}

	cout<<"max is "<<max<<endl;





	

	return 0;
}