#include<iostream>
using namespace std;
void spriralprint(int arr[5][3],int trows,int tcols){

	int srow=0,erow=trows-1,scol=0,ecol=tcols-1;
while(srow<=erow and scol<=ecol){
	// pehle row ka kaam
	for(int i=scol;i<=ecol;i++){
		cout<<arr[srow][i]<<" ";
	}
	srow++;
	// last col ka kaam
	for(int j=srow;j<=erow;j++){
		cout<<arr[j][ecol]<<" ";
	}
	ecol--;
		// last row ka kaam
	for(int k=ecol;k>=scol;k--){
		cout<<arr[erow][k]<<" ";
	}
	erow--;

	// pehle col ka kaam
	for(int h=erow;h>=srow;h--){
		cout<<arr[h][scol]<<" ";
	}
	scol++;

}



}
int main(){
	// int arr[5][5]={
	// 	{3,9,4,6,2},
	// 	{5,3,16,9,0},
	// 	{42,22,6,3,4},
	// 	{61,31,20,9,2},
	// 	{1,3,0,92,21}
	// };

	int arr[5][3]={
		{3,9,4},
		{5,3,16},
		{42,22,6},
		{61,31,20},
		{1,3,0}
	};
	int trows=5;
	int tcols=3;

	// int trows=5;
	// int tcols=5;
	spriralprint(arr,trows,tcols);

	cout<<endl;



	return 0;
}