#include<iostream>
using namespace std;
bool findeleinmatrix(int arr[][4],int key,int trows,int tcols){

	for(int i=0;i<=trows-1;i++){
		for(int j=0;j<=tcols-1;j++){ //4
	if(arr[i][j]==key){
		return true;
	}
}
	}

	return false;
	

}
int main(){
	int arr[][4]={
		{2,4,3,5},
		{6,7,9,10},
		{12,13,15,16}
	};
	// int key;
	// cin>>key;//30

	// if(findeleinmatrix(arr,key,3,4)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }




	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl; 

	}



	return 0;
}