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
void append(char a[100],char b[100]){ 
	// a-->"hello" b-->"class"
	// a-->"helloclass" b-->"class"
	int j=0;
	int i=lenghtofstring(a);//5

	while(j<=lenghtofstring(b)){
		a[i]=b[j];
		i++;
		j++;

	}

}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);//"Hello" //helloclass
	cin.getline(b,100);//"class" //class
	cout<<a<<endl;
	cout<<b<<endl;
	append(a,b);
	cout<<a<<endl;
	cout<<b<<endl;

	return 0;
}