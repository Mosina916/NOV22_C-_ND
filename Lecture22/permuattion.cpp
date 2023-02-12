#include<iostream>
using namespace std;
void permutation(char arr[100],int i){//abc
	// base case
	if(arr[i]=='\0'){
		cout<<arr<<endl;
		return;
	}
	// rec case
	for(int j=i;arr[j]!='\0';j++){
		swap(arr[i],arr[j]);
		permutation(arr,i+1);
		swap(arr[i],arr[j]);//backtracking

	}
	
}
int main(){
	char arr[100];
	cin>>arr;//abc
	permutation(arr,0);


	return 0;
}