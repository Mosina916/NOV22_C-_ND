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
void roattebynchacters(char arr[100],int n){
	int i=lenghtofstring(arr);//12
	int k=lenghtofstring(arr);//12
	int p=lenghtofstring(arr);//12

	while(i>=0){
		arr[i+n]=arr[i];
	i--;

	}
	// CodCodingblocks
	// cout<<arr<<endl;
	// cks ka kaam 
	int s=0;
	// loop
	for(int i=1;i<=n;i++){
		arr[s]=arr[k];
	s++;//2
	k++;//14

	}
	// cksCodingblocks
	// cout<<arr<<endl;
	arr[p]='\0';
	// cksCodingblo\0ks
	cout<<arr<<endl;
}

int main(){
	int n;
	cin>>n;//3
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//Codingblocks
	roattebynchacters(arr,n);
	return 0;
}