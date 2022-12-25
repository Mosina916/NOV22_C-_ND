#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//read n
	int num;
	cin>>num;
	int sum=num;
		// float sum=num;
	int max=num;
	int min=num;

	int coun=1;
	while(coun<=n-1){
		cin>>num;
		sum=sum+num;//mean
		// min ka kaam
		if(num<min){
			min=num;

		}
		// max ka kaam
		if(num>max){
			max=num;
		}
		coun=coun+1;
	}


	// cout<<"mean is "<<(sum*1.0)/n<<endl;
	// cout<<"mean is "<<float(sum)/n<<endl;

	// cout<<"mean is "<<float(sum)/n<<endl;
	// cout<<"mean is "<<sum/n<<endl;
	cout<<"max is "<<max<<endl;
	cout<<"min is "<<min<<endl;


	cout<<int(8.6)<<endl;



	

	return 0;
}