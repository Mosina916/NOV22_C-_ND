#include <iostream>

#include <iomanip>
using namespace std;
int main(){
	// int n=10;
	// int kitnedecpoints=2;
	int n,kitnedecpoints;
	cin>>n>>kitnedecpoints;
	float i=0;
	float inc=1;
	int co=1;
	while(co<=kitnedecpoints+1){

		while(i*i<=n){
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;


		co=co+1;
	}

	cout<<i<<endl;
	 // cout << fixed <<setprecision(2) << i<< endl;









	return 0;
}