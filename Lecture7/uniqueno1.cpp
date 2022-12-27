#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	//4 5 4 12 5
	// int no;
	// cin>>no;//4

	// int ans=no;//4

	// for(int co=1;co<=n-1;co++){//5<=4
	// 	cin>>no;//5
	// 	ans=ans^no;//4^5;//1^4-->5^12-->9^5-->12

	// }

	// cout<<ans<<endl;

	int no;
	int ans=0;//4

	for(int co=1;co<=n;co++){//5<=4
		cin>>no;//5
		ans=ans^no;//4^5;//1^4-->5^12-->9^5-->12

	}

	cout<<ans<<endl;



	return 0;
}