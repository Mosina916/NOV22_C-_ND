#include<iostream>
using namespace  std;
void dec(int n){//5--> 5 to 1 
	// base case 
	if(n==0){
		return;
	}
	// rec case
	cout<<n<<" ";//5 4 3 2 1
	dec(n-1);
}
void inc(int n){//5--> 1 to 5
	// base case 
	if(n==0){
		return;
	}
	// rec case 
	inc(n-1);//1 2 3 4
	cout<<n<<" ";// 5	
}
int main(){
	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);


	return 0;
}