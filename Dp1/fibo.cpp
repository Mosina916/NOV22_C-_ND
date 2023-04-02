#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}
	// rec case
	return fibo(n-1)+fibo(n-2);

}
// to down
int fibotd(int n,int *dp){//2
	// base case
	if(n==0||n==1){
		return dp[n]=n;
	}
	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];
	}

	// rec case
	return dp[n]=fibotd(n-1,dp)+fibotd(n-2,dp);

}

// bottom up-->itertaive 
int bottomupfibo(int n){//5
	int *arr=new int[n+1];//6
	// intilization condition
	arr[0]=0;
	arr[1]=1;
	for (int i = 2; i <=n; ++i)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}

// array print
	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<' ';
	// }

	// cout<<endl;

	return arr[n];


}
int main(){
	int n;
	cin>>n;
	int*dp=new int[n+1];//6
	for (int i = 0; i <=n; ++i)
	{
		dp[i]=-1;
	}
	
	cout<<"topdown rec "<<fibotd(n,dp)<<endl;
	cout<<"bottomupfibo "<<bottomupfibo(n)<<endl;
	cout<<"simple rec "<<fibo(n)<<endl;
	// top down

	

	// cout<<"topdown rec "<<fibotd(n,arr)<<endl;


	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;




	return 0;
}