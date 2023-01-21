#include<iostream>
using namespace std;
void formmatrix(int trows,int tcols,char arr[100][100]){

	int srow=0,erow=trows-1,scol=0,ecol=tcols-1;
	char ch='X';
while(srow<=erow and scol<=ecol){
	// pehle row ka kaam
	for(int i=scol;i<=ecol;i++){
		arr[srow][i]=ch;
	}
	srow++;
	// last col ka kaam
	for(int j=srow;j<=erow;j++){
		arr[j][ecol]=ch;
	}
	ecol--;
		// last row ka kaam
	for(int k=ecol;k>=scol;k--){
		arr[erow][k]=ch;
	}
	erow--;

	// pehle col ka kaam
	for(int h=erow;h>=srow;h--){
		arr[h][scol]=ch;
	}
	scol++;
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}

}



}
int main(){
	int trows,tcols;
	cin>>trows>>tcols;
	char arr[100][100];
	formmatrix(trows,tcols,arr);

	for(int i=0;i<=trows-1;i++){
		for(int j=0;j<=tcols-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	



	return 0;
}