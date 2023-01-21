#include<iostream>
using namespace std;
int lenghtofstring(char arr[100]){
	int l=0;
	int i=0;
	while(arr[i]!='\0'){
		l=l+1;
		i=i+1;
	}

	return l;
}
void reversearr(char arr[100]){
	int i=0;
	int j=lenghtofstring(arr)-1;

	while(i<j){
		swap(arr[i],arr[j]);
	i++;
	j--;

	}
	

}
int main(){
	char arr[100];
	cin.getline(arr,100);//"hello";-->olleh
	cout<<arr<<endl;
	reversearr(arr);
	cout<<arr<<endl;


	
	
	return 0;
}