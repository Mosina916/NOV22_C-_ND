#include<iostream>
using namespace std;
void waveprint(int arr[4][5],int trows,int tcols){

	for(int cols=0;cols<=tcols-1;cols++){
		if(cols%2==0){
			// even -->downaward
			for(int r=0;r<=trows-1;r++){
				cout<<arr[r][cols]<<" ";
			}
		}
		else{
			// odd -->upward
			for(int r=trows-1;r>=0;r--){
				cout<<arr[r][cols]<<" ";
			}

		}
	}
}

int main(){
	int arr[4][5]={
		{3,9,4,6,2},
		{5,3,16,9,0},
		{42,22,6,3,4},
		{61,31,20,9,2}
	};
	int trows=4;
	int tcols=5;
	waveprint(arr,trows,tcols);



	return 0;
}