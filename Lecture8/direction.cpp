#include<iostream>
using namespace std;
int main(){
	// SSSNEEEW
	int x=0,y=0;
	char ch;
	// SSSNEEEW
	// cin>>ch;//S
	ch=cin.get();

	while(ch!='\n'){
		if(ch=='E'){
		x++;
	}
	else if(ch=='W'){
		x--;
	}
	else if(ch=='N'){
		y++;
	}
	else{
		y--;//0 -1
	}
	// cin>>ch;//s
	ch=cin.get();
	}

	cout<<x<<" "<<y<<endl;//2 -2
	if(x>=0 and y>=0){
		// in ist quadratant
		for(int c=1;c<=x;c++){
			cout<<'E';
		}
		for(int c=1;c<=y;c++){
			cout<<'N';
		}

	}
	else if(x<=0 and y>=0){
		// in 2nd quadratant
		for(int c=1;c<=y;c++){
			cout<<'N';
		}

		for(int c=1;c<=abs(x);c++){
			cout<<'W';
		}


	}
	else if(x<=0 and y<=0){
		// in 3rd quadratant
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
		}
		for(int c=1;c<=abs(x);c++){
			cout<<'W';
		}
	}
	else{
		// 4th quadrant //3 -4
		// x times E
		for(int c=1;c<=x;c++){
			cout<<'E';
		}
		// y times S
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
		}




	}
	


	
	return 0;
}