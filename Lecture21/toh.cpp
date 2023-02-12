#include<iostream>
using namespace std;
void toh(int n,char src,char help,char dest){
	// base case
	if(n==0){
		return;
	}


	// ./rec case
	toh(n-1,src,dest,help);
	cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	toh(n-1,help,src,dest);
}	
int main(){
	int n;
	cin>>n;//3
	toh(n,'A','B','C');//src hel dest
	

	return 0;
}