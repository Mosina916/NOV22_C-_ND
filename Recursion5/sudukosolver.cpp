#include <iostream>
#include<cmath>
using namespace std;
bool kyamainumdaalsaktihun(int mat[9][9],int i,int j,int num,int n){
	//vertical check
	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;

		}
	}

	// horizontal check
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;

		}
	}

	// 3*3 check
	int sn=sqrt(n);//3
	int si=(i/sn)*sn;
	int sj=(j/sn)*sn;

	for(int l=si;l<(si+sn);l++){//3
	for(int m=sj;m<(sj+sn);m++){//5
	if(mat[l][m]==num){
		return false;
	}
		}
	}


	return true;


}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		// suduko print
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}
		return true;
	}



	// rec case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}
	// sgar wo filled hai tou seedha aage badho
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);

	}
	// sgar wo filled nahi hai tou fill kardo
	else{
		for(int num=1;num<=9;num++){
			if(kyamainumdaalsaktihun(mat,i,j,num,n)){
			mat[i][j]=num;//9
			bool bakicellskaans=sudukosolver(mat,i,j+1,n);
			if(bakicellskaans==true){
				return true;
			}
			mat[i][j]=0;//bactracking

		}


		}
		
	}
	return false;

}
int main(){
	cout<<"hello"<<endl;
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};
// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8 
// 1 9 8 3 4 2 5 6 7 
// 8 5 9 7 6 1 4 2 3 
// 4 2 6 8 5 3 7 9 1 
// 7 1 3 9 2 4 8 5 6 
// 9 6 1 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5 
// 3 4 5 2 8 6 1 7 9

		cout<<"hello"<<endl;
		bool b=sudukosolver(mat,0,0,9);

			cout<<b<<endl;



	return 0;
}