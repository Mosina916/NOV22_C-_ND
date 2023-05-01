#include<iostream>
#include <unordered_map>
using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;
	}

};
class trie{
	node*root;
public:
	trie(){
		root=new node('\0');
	}

	// insert
	void insert(char *word){//mend
		node* temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];//m
		if(temp->h.count(ch)){
			// agar hai tou direct temp ko ch wale node pe lejao
		temp=temp->h[ch];
		}
		else{
			temp->h[ch]=new node(ch);
			temp=temp->h[ch];
		}

		}
		temp->isterminal=true;
		

	}

	bool search(char *word){//code red
		node*temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];//
		if(temp->h.count(ch)==1){
			temp=temp->h[ch];

		}
		else{
			return false;

		}

		}
		return temp->isterminal;
		

	}

};
int main(){
	trie t;
	char arr[100]="board";
	t.insert(arr);
	t.insert("boarding");
	t.insert("code");
	t.insert("coding");
	t.insert("coder");
	char key[100];
	cin.getline(key,100);//codi

	if(t.search(key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}


}