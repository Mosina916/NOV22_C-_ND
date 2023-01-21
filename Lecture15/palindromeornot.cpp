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

bool ispalindrome(char arr[100]){//abcdedpba
	int i=0;
	int j=lenghtofstring(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	// nitatin
	return true;
}

int main(){
	char arr[100];//"nitin"
	// cin>>arr;
	cin.getline(arr,100);
	if(ispalindrome(arr)==true){
		cout<<"yes palindrome"<<endl;
	}
	else{
		cout<<"Not palindrome"<<endl;

	}
	// cout<<lenghtofstring(arr)<<endl;


	return 0;
}