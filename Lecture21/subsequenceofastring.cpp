#include<iostream>
using namespace std;
void subsequence(char inpu[100],int i,char out[100],int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// rec case
	// without a 
	subsequence(inpu,i+1,out,j);
	// with a
	out[j]=inpu[i];//a
	subsequence(inpu,i+1,out,j+1);
}
	

void subsequence2(string inpu,int i,string out){
		// base case
		if(i>=inpu.length()){
			cout<<out<<endl;
			return;

		}


		// rec case
		subsequence2(inpu,i+1,out);


		subsequence2(inpu,i+1,inpu[i]+out);
	}
int main(){

	string inpu;//abc
	cin>>inpu;
	string out="";
	subsequence2(inpu,0,out);

	// char inpu[100];
	// cin>>inpu;//abc
	// char out[100];
	// subsequence(inpu,0,out,0);
	return 0;
}