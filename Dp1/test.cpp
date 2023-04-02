#include <iostream>
using namespace std;
int main(){
	int arr[]={4,5,2,6,0,0,1};
	int n=sizeof(arr)/sizeof(int);

	// inbuild sort
	// sort(arrayname,arrayname+noofelements);
	sort(arr,arr+n);

// print
	for (int i = 0; i <n ; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}