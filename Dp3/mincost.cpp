#include<iostream>
using namespace std;
int mincost(int cost[4][4],int x,int y){
	if(x==0 and y==0){
		return cost[x][y];
	}
	if(x<0 || y<0){
		return INT_MAX;
	}

	return min(mincost(cost,x-1,y),mincost(cost,x,y-1))+cost[x][y];
}

// /top down
int topdownmincost(int cost[4][4],int x,int y,int arr[100][100]){
	if(x<0 || y<0){
		return INT_MAX;
	}
	if(x==0 and y==0){
		return arr[x][y]=cost[x][y];
	}
	

	if(arr[x][y]!=-1){
		return arr[x][y];
	}

	return arr[x][y]=min(topdownmincost(cost,x-1,y,arr),topdownmincost(cost,x,y-1,arr))+cost[x][y];
}

// bottom up


int bottomup(int cost[4][4],int x,int y){//2 3
 	int arr[100][100];
 	for(int i=0;i<=x;i++){
 		for(int j=0;j<=y;j++){
 			if(i==0 and j==0){
 				arr[i][j]=cost[i][j];
 			}
 			else if(i==0){
 				arr[i][j]=arr[i][j-1]+cost[i][j];
 			}
 			else if(j==0){
 				arr[i][j]=arr[i-1][j]+cost[i][j];
 			}
 			else{
 				arr[i][j]=min(arr[i-1][j],arr[i][j-1])+cost[i][j];
 			}
 		}
 	}

 	return arr[x][y];


}


int main(){
	int cost[4][4]={
		{2,3,1,4},
		{3,5,3,2},
		{2,6,6,1},
		{3,4,2,5}
	};
	int x,y;
	cin>>x>>y;//2 3


	cout<<mincost(cost,x,y)<<endl;
	// int *arr=new int[x][y];
	int arr[100][100];

	for (int i = 0; i <=x; ++i)
	{
		for(int j=0;j<=y;j++){
			arr[i][j]=-1;

		}
	}

	// cout<<topdownmincost(cost,x,y,arr)<<endl;

	// for (int i = 0; i <=x; ++i)
	// {
	// 	for(int j=0;j<=y;j++){
	// 		cout<<arr[i][j]<<" ";

	// 	}

	// 	cout<<endl;
	// }


	cout<<bottomup(cost,x,y)<<endl;






	return 0;
}
