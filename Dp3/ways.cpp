#include<iostream>
using namespace std;
int waystoreachdest(int x,int y){
	// base case
	if(x==0 and y==0){
		return 1;

	}


	// rec case
	int ans=0;
	for(int l=x-1;l>=0;l--){
		ans+=waystoreachdest(l,y);
	}

	for(int k=y-1;k>=0;k--){
		ans+=waystoreachdest(x,k);
	}
	return ans;
}


int waystoreachdesttdp(int x,int y,int arr[100][100]){
	// base case
	if(x==0 and y==0){
		return arr[x][y]=1;

	}

	if(arr[x][y]!=-1){
		return arr[x][y];
	}


	// rec case
	int ans=0;
	for(int l=x-1;l>=0;l--){
		ans+=waystoreachdesttdp(l,y,arr);
	}

	for(int k=y-1;k>=0;k--){
		ans+=waystoreachdesttdp(x,k,arr);
	}
	return arr[x][y]=ans;
}

int bottomup(int x,int y){
	int arr[100][100];
	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			if(i==0 and j==0){
				arr[i][j]=1;
			}
			else{
				int ans=0;
				for(int l=i-1;l>=0;l--){
					ans+=arr[l][j];
				}
				for(int k=j-1;k>=0;k--){
					ans+=arr[i][k];
				}
				arr[i][j]=ans;
			}
		}
	}

	return arr[x][y];

}
int main(){
	int x,y;
	cin>>x>>y;

	cout<<bottomup(x,y)<<endl;
	// cout<<waystoreachdest(x,y)<<endl;
	// int arr[100][100];
	// memset(arr,-1,sizeof(arr));
	// cout<<waystoreachdesttdp(x,y,arr)<<endl;



	


	return 0;
}
