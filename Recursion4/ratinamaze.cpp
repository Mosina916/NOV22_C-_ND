#include<iostream>
using namespace std;
int c=0;
bool ratinamaze(char maze[4][5],int sol[4][4],int i,int j,int rows,int cols){
	// base case
	if(i==rows-1 and j==cols-1){
		sol[i][j]=1;
		// print sol matrix
		for(int l=0;l<rows;l++){
			for(int m=0;m<cols;m++){
				cout<<sol[l][m]<<" ";
			}
			cout<<endl;
		}
		// return true;
		c++;

// multiple paths
		sol[i][j]=0;
		return false;


	}

	// rec case
	sol[i][j]=1;//src will unbolked
	// forward
	if(j<=cols-2 and maze[i][j+1]!='B'){
		bool kyaaagekaans=ratinamaze(maze,sol,i,j+1,rows,cols);
		if(kyaaagekaans==true){
			return true;
		}

	}
	// downward
	if(i<=rows-2 and maze[i+1][j]!='B'){
		bool kyaaagekaans=ratinamaze(maze,sol,i+1,j,rows,cols);
		if(kyaaagekaans==true){
			return true;
		}

	}
	sol[i][j]=0;//bactracking
	return false;

}
int main(){
	char maze[4][5]={
		"UUUU",
		"UUUU",
		"BBUU",
		"UBUU"
	};

	int sol[4][4]={0};
	ratinamaze(maze,sol,0,0,4,4);
	cout<<"total paths "<<c<<endl;


	return 0;
}