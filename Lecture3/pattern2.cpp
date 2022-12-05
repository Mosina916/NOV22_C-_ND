#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// int rowno=1;
	int rowno=0;
	// while(rowno<=n){
	// while(rowno<=n-1){
	while(rowno<n){

	// 1 rowkakaam
	int count=1;
	// while(count<=n-rowno+1){

	while(count<=n-rowno){
		cout<<'*';
		count=count+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}
	

	


	return 0;
}