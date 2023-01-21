#include<iostream>
using namespace std;
int lenghtofstring(char arr[100]){
	int l=0;
	int i=0;
	while(arr[i]!='\0'){
		l=l+1;
		i=i+1;
	}

	return l;
}

int main(){
	char arr[100];//"hello\0"
	// cin>>arr;
	cin.getline(arr,100);
	cout<<lenghtofstring(arr)<<endl;


	return 0;
}