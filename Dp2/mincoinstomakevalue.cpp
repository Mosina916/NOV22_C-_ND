#include<iostream>
using namespace std;
// 1d dp
int mincoinsneedtomakeamount(int coins[],int n,int amount){
	// base case
	if(amount==0){
		return 0;
	}

	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-coins[i];//30-40-->-10,30-25-->5
	if(bachaamount>=0){
		int rans=mincoinsneedtomakeamount(coins,n,bachaamount);//1
		if(rans<ans){
			ans=rans+1;
		}

	}

	}
	return ans;
}
// td
int mincoinsneedtomakeamounttd(int coins[],int n,int amount,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}

	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-coins[i];//30-40-->-10,30-25-->5
	if(bachaamount>=0){
		int rans=mincoinsneedtomakeamounttd(coins,n,bachaamount,arr);//1
		if(rans<ans){
			ans=rans+1;
		}

	}

	}
	return arr[amount]=ans;
}
// bottom up
int bottomup(int coins[],int amount,int n){
	int *arr=new int[amount+1];
	arr[0]=0;
	for (int i = 1; i <=amount ; ++i)
	{
		arr[i]=INT_MAX;
	}
	for (int curramout=1; curramout<=amount;curramout++)
	{
		for(int j=0;j<n;j++){
			int bachaamount=curramout-coins[j];//
			if(arr[bachaamount]!=INT_MAX and bachaamount>=0){
				arr[curramout]=min(arr[curramout],arr[bachaamount]+1);
			}
		}
	}


	for(int i=0;i<=amount;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[amount];


}
int main(){
	// int coins[]={40,25,10,5};
	// int coins[]={40,50,100,55};
	int coins[]={5,3,2};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;//30

	cout<<bottomup(coins,amount,n)<<endl;
	// cout<<mincoinsneedtomakeamount(coins,n,amount)<<endl;
	// int *arr=new int[amount+1];

	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }

	// cout<<mincoinsneedtomakeamounttd(coins,n,amount,arr)<<endl;
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	return 0;
}