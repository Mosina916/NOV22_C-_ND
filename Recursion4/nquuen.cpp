#include<iostream>
using namespace std;
int c=0;
bool kyamarakhhunyanahi(int solboard[100][100],int n,int i,int j){//2 //2
	// vertical check
	for(int m=i-1;m>=0;m--){
		if(solboard[m][j]==1){
			return false;

		}
	}

	// diagonally rd
	int u=i-1;//1
	int v=j+1;//3
	while(u>=0 and v<n){
			if(solboard[u][v]==1){
			return false;

		}
		u--;//0 -1
		v++;//4 5

	}

	// left dia
	int p=i-1;//1
	int q=j-1;//1
		while(p>=0 and q>=0){
			if(solboard[p][q]==1){
			return false;

		}
		p--;//
		q--;//

	}


	return true;






}
bool nqueen(int solboard[100][100],int n,int i){
	// base case
	if(i==n){
		 //print matrix
		// print sol matrix
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<solboard[l][m]<<" ";
			}
			cout<<endl;
		}
		c++;

		cout<<endl;

		// return true;

		return false;
	}


	// rec case
	for(int j=0;j<=n-1;j++){
		// pehle check kya mai rakh sakti hun
	if(kyamarakhhunyanahi(solboard,n,i,j)){
		solboard[i][j]=1;
		bool aagekaans=nqueen(solboard,n,i+1);//false
		if(aagekaans==true){
			return true;

		}
		solboard[i][j]=0;
	}

	}
	return false;
	

}

int main(){
	int solboard[100][100]={0};
	int n;
	cin>>n;//4
	nqueen(solboard,n,0);
	cout<<"total sol "<<c<<endl;



	return 0;
}