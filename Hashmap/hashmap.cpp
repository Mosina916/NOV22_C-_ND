#include<iostream>
using namespace std;
class node{
public:
	string fname;
	int price;
	node*next;
	node(string s,int p){
		fname=s;
		price=p;
		next=NULL;
	}
};
class hashmap{
	node **arr;
	int cs;
	int ts;
public:
	hashmap(int size=7){
		arr=new node*[size];
		ts=size;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

	}

	// elephantqwerty

	int hashfunction(string s){//abc
		// (s[0]*29^0+...)%ts-->(ans+....)%ts
		// s[0]*29^0)%ts-->(s[0]%ts*29^0%ts)%ts
		int ans=0;
		int mult=1;

		for(int i=0;i<s.length();i++){

		ans=(ans%ts+((s[i]%ts*mult%ts)%ts))%ts;
		mult=(mult*29)%ts;//29

		}

		// return ans;

		return ans%ts;




	}

	// rehashing
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}

		// copy
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];
			while(head!=NULL){
				insert(head->fname,head->price);
				head=head->next;
			}
		}
	}




	// insert
	void insert(string s,int p){
		int index=hashfunction(s);
		node*n=new node(s,p);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if(cs/(ts*1.0)>0.5){
			rehashing();
		}
	}


	void print(){
		for (int i = 0; i <ts; ++i)
		{
			cout<<i<<" : ";
			node*head=arr[i];
			while(head!=NULL){
				cout<<'('<<head->fname<<","<<head->price<<"), ";
				head=head->next;
			}
			cout<<endl;
		}

	}

	bool search(string key){//mango//2
		int index=hashfunction(key);//2
		node*head=arr[index];
		while(head!=NULL){
			if(head->fname==key){
				return true;
			}
			head=head->next;
		}
		return false;


	}

};

int main(){
	hashmap h;
	h.insert("mango",123);
	h.insert("pappaya",345);
	h.insert("banana",43);
	h.insert("ana",83);
	h.print();

	for(auto x:h){
		cout<<x.first<<" : ";
		for(auto p:x.second){
			cout<<"("<<p.first<<" "<<p.second<<"),";
		}


		cout<<x.second<<endl;
		cout<<endl;
	}




	return 0;
}