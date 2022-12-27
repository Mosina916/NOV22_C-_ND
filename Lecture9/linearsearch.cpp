#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,9,30,40,30};
	// int element=90;
	int element=30;

	int i=0;

// loop
	while(i<=4){
		if(arr[i]==element){
			cout<<"element is present"<<endl;
			// return 0;
			break;

	}
	else{
		i++;//5
	}

	}
	if(i==5){
		cout<<"element is not present"<<endl;

	}
	

// 	int i=0;

// // loop
// 	while(i<=4){
// 		if(arr[i]==element){
// 			cout<<"element is present"<<endl;
// 			return 0;
// 			// break;

// 	}
// 	else{
// 		i++;//5
// 	}

// 	}
// 	cout<<"element is not present"<<endl;
	


	return 0;
}