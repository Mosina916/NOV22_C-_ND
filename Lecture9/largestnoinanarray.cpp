#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,9,30,40,30};
	int abhitakkalargest=arr[0];//pehla elem ko largest

	// int i=1;
	// // loop
	// while(i<=4){
	// 	if(arr[i]>abhitakkalargest){//30>40
	// 	abhitakkalargest=arr[i];//40
	// 	i++;//4

	// }
	// else{
	// 	i++;
	// }

	// }

	// cout<<abhitakkalargest<<endl;


	int i=1;
	// loop
	while(i<=4){
		if(arr[i]>abhitakkalargest){//30>40
		abhitakkalargest=arr[i];//40
		

	}
	
		i++;
	

	}

	cout<<abhitakkalargest<<endl;
	


	


	return 0;
}