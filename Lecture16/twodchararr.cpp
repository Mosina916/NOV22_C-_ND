#include<iostream>
using namespace std;
int main(){
	// datatype nameofarr[rows][cols];
	// char arr[3][4]={
	// 	{'A','B','C','D'},
	// 	{'U','H','O','P'},
	// 	{'O','W','G','K'},

	// };

	// char arr[3][5]={
	// 	{'A','B','C','D','\0'},
	// 	{'U','H','O','P','\0'},
	// 	{'O','W','G','K','\0'},

	// };
	// char arr[3][5]={
	// 	{'A','B','C','D','\n'},
	// 	{'U','H','O','P','\n'},
	// 	{'O','W','G','K','\0'},

	// };
	// char arr[3][5]={
	// 	{'A','B','C','D','\0'},
	// 	{'U','H','O','P','\0'},
	// 	{'O','W','G','K','\0'},

	// };
	// char arr[]="ABCD";

	char arr[3][5]={
		"ABCD",
		"UHOP",
		"OWGK",

	};

	// cout<<&arr[0]<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;

	cout<<&arr[0][0]<<endl;//ABCDUHOOWGKgarbage
	cout<<&arr[1][0]<<endl;//UHOOWGKgarbage
	cout<<&arr[2][0]<<endl;//OWGKgarbage


	// cout<<&arr[0][0]<<endl;//ABCD
	// cout<<&arr[1][0]<<endl;//UHOP
	// cout<<&arr[2][0]<<endl;//OWGK
	// for(int i=0;i<=2;i++){
	// 	for(int j=0;j<=3;j++){
	// 	cout<<arr[i][j]<<" ";
	// }
	// cout<<endl; //nested loop

	// }
	


	return 0;
}