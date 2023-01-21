#include<iostream>
using namespace std;
// staircase search-->in sorted matrix
bool findeleinsortedmatrix(int arr[][4],int key,int trows,int tcols){
	int i=0;
	int j=tcols-1;

	while(i<=trows-1 and j>=0){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
		return true;
	}
	else if(key>arr[i][j]){
		i++;
	}
	else{
		j--;
	}

	}
	return false;

	
	
}
int main(){
	int arr[][4]={
		{2,4,3,5},
		{6,7,9,10},//1 2
		{12,13,15,16}
	};
	int key;
	cin>>key;//30

	if(findeleinsortedmatrix(arr,key,3,4)==true){
		// cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}




	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl; 

	}



	return 0;
}