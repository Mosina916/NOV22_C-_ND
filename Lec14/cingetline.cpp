#include<iostream>
using namespace std;

int main(){
	char arr[100];
	// int i=0;
	// char ch;
	// ch=cin.get();
	// while(ch!='\n'){
	// 	arr[i]=ch;
	// 	ch=cin.get();
	// 	i++;

	// }
	// arr[i]='\0';
	// cin.getline(arr,100);

	int i=0;
	char ch;
	ch=cin.get();
	while(ch!='?'){
		arr[i]=ch;
		ch=cin.get();
		i++;

	}
	arr[i]='\0';
	// cin.getline(arr,100,'?');
	cout<<arr<<endl; 

	
	
	return 0;
}









