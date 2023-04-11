#include<iostream>
using namespace std;
char s1[100],s2[100];
int lcs(int i,int j){
	// base case
	if(s1[i]=='\0'||s2[j]=='\0'){
		return 0;
	}


	// rec case
	int ans;
	if(s1[i]==s2[j]){
		ans=1+lcs(i+1,j+1);
	}
	else{
		ans=max(lcs(i+1,j),lcs(i,j+1));
	}

	return ans;

}
int bottomup(){
	int arr[100][100]={0};
	// int lens1=s1.length();
	int lens1=strlen(s1);
	int lens2=strlen(s2);
	for(int i=1;i<=lens1;i++){
			for(int j=1;j<=lens2;j++){
	if(s1[i-1]==s2[j-1]){
		arr[i][j]=1+arr[i-1][j-1];
	}
	else{
		arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

	}
}
	}
	for(int i=0;i<=lens1;i++){
		for(int j=0;j<=lens2;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return arr[lens1][lens2];






}

int main(){
	cin>>s1>>s2;//ahdf'\0'
	// hdf
	cout<<lcs(0,0)<<endl;

	cout<<bottomup()<<endl;
	


	return 0;
}
