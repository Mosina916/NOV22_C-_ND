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
	int n;
	cin>>n;//4 
	// cin.ignore();
	// pen hello elephant book
	char inp[100];
	cin.getline(inp,100);//pen
	char abhitakkimaxstring[100];
	copy(inp,abhitakkimaxstring);
	// abhitakkimaxstring=elephant
	int maxl=lenghtofstring(inp);//8

// loop
	for(int i=1;i<=n-1;i++){
		cin.getline(inp,100);//book
	if(lenghtofstring(inp)>maxl){
		copy(inp,abhitakkimaxstring);
		maxl=lenghtofstring(inp);
	}

	}


	cout<<"max string is : "<<abhitakkimaxstring<<endl;
	cout<<"max len is "<<maxl<<endl;
	








	
	
	return 0;
}