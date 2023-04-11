#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;

int main(){
	// unordered_map<datattypeofkey,datatypeofval> name;
	// unordered_map<string,int>h;
	map<string,int>h;
	h["mango"]=123;
	h["pappaya"]=345;
	h["banana"]=43;
	// h.insert("mango",123);
	// b

	for(auto x:h){
		cout<<x.first<<" : ";
		// for(auto p:x.second){
		// 	cout<<"("<<p.first<<" "<<p.second<<"),";
		// }


		cout<<x.second<<endl;
		cout<<endl;
	}




	return 0;
}