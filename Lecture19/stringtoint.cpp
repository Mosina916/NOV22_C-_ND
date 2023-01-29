#include<iostream>
using namespace  std;
int convertstringtoint(string s,int l){// "3542" 3
	// base case
if(l==0){
	return 0;
}


	// rec case\ "354"
	// int cans=convertstringtoint(s,l-1)// "354"-->354
	char ch=s[l-1];//'2'
	int ld=ch-'0';//'2'-'0'-->2
	// return cans*10+ld;
	return convertstringtoint(s,l-1)*10+ld;

}
int main(){
	string s;
	cin>>s;//"3542"-->3542
	int l=s.length();//4
	// cout<<s<<endl;
	// s=s+300;


	int x=convertstringtoint(s,l);//4
	// x=x+300;

	cout<<x<<endl;

	


	return 0;
}