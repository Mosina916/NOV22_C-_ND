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
void copy(char a[100],char b[100]){
	int i=0;
	int j=0;
	while(i<=lenghtofstring(a)){
		b[j++]=a[i++];

	}
	
	// i++;
	// j++;

}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);//"Hello" //helloclass
	// cin.getline(b,100);
	copy(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
}