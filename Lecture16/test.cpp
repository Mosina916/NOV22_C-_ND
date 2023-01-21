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
// bool permuatation(char arr1[100],char arr2[100]){
// 	if(lenghtofstring(arr1)!=lenghtofstring(arr2)){
// 		return false;
// 	}
// 	else{
// 		int countarr1[26]={0};
// 		for(int i=0;arr1[i]!='\0';i++){
// 			char ch=arr1[i];//'B'
// 			int index=ch-'A';//'A'-'A' 65-65
// 			countarr1[index]++;

// 		}

// 		int countarr2[26]={0};
// 		for(int i=0;arr2[i]!='\0';i++){
// 			char ch=arr2[i];//'B'
// 			int index=ch-'A';//'A'-'A' 65-65
// 			countarr2[index]++;

// 		}


// 		for(int j=0;j<=25;j++){
// 			if(countarr1[j]!=countarr2[j]){
// 				return false;
// 			}
// 		}
// 		return true;




// 		// print countarr1
// 		// for(int j=0;j<=25;j++){
// 		// 	cout<<countarr1[j]<<" ";
// 		// }
// 		// cout<<endl;


// 		// for(int j=0;j<=25;j++){
// 		// 	cout<<countarr2[j]<<" ";
// 		// }
// 		// cout<<endl;
		




// 	}
// }
bool permuatation(char arr1[100],char arr2[100]){
	if(lenghtofstring(arr1)!=lenghtofstring(arr2)){
		return false;
	}
	else{
		int countarr1[26]={0};
		for(int i=0;arr1[i]!='\0';i++){
			char ch=arr1[i];//'B'
			int index=ch-'A';//'A'-'A' 65-65
			countarr1[index]++;

		}

		
		for(int i=0;arr2[i]!='\0';i++){
			char ch=arr2[i];//'B'
			int index=ch-'A';//'A'-'A' 65-65
			countarr1[index]--;

		}


		for(int j=0;j<=25;j++){
			if(countarr1[j]!=0){
				return false;
			}
			
		}
		return true;




		// print countarr1
		// for(int j=0;j<=25;j++){
		// 	cout<<countarr1[j]<<" ";
		// }
		// cout<<endl;


		// for(int j=0;j<=25;j++){
		// 	cout<<countarr2[j]<<" ";
		// }
		// cout<<endl;
		




	}
}
int main(){
	char arr1[100];//ABCCYZZ\0
	char arr2[100];//ZYACCBZ
	cin.getline(arr1,100);
	cin.getline(arr2,100);

	if(permuatation(arr1,arr2)==true){
		cout<<"yes permuatation"<<endl;
	}
	else{
		cout<<"Not permuatation"<<endl;

	}



	return 0;
}