#include<iostream>
using namespace std;
int main(){
	int arr[]={3,-5,6,7,-8,-2};
	int n=sizeof(arr)/sizeof(int);
	int cs=0;
	int ms=INT_MIN;
	for (int i = 0; i <n; ++i)
	{
		cs=cs+arr[i];
		ms=max(ms,cs);
		if(cs<0){
			cs=0;
		}
		
	}
	cout<<ms<<endl;


	return 0;

}