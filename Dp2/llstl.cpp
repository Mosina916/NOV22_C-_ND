#include<iostream>
#include<list>
using namespace std;
int main(){
	// vector<int> v;
	// list<datatype> listname;
	list<int> l;
	l.push_front(5);
	l.push_front(3);//3 5
	l.push_back(2);//3 5 2
	l.push_back(12);//3 5 2 12 

	// for (auto it = l.begin(); it != l.end(); ++it){
 //        cout <<*it<<" ";
	// }
 //    cout << '\n';


    // cout<<l[2]<<endl;

    // cout<<*(l.begin(),3)<<endl;
 //     auto it = l.begin();
	// int pos=3;
	// for (int i = 1; i <=pos-1 ; ++i)
	// {
	// 	it++;
		
	// }

	// cout<<*it<<endl;




    // cout<<*(l.begin()+)<<endl;

    // l.sort();

   
 //     l.reverse();
 //      for (auto it = l.begin(); it != l.end(); ++it){
 //        cout <<*it<<" ";
	// }
 //    cout << '\n';





	return 0;
}