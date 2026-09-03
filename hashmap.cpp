#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	//declaration of hashmap
	
	unordered_set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	for(int k: s){
		cout<<k<<" ";
	}
	cout<<endl;
	int tar = 4;
	if(s.find(tar)!=s.end()){//check if element is present in the set or not 
		cout<<"Target found";
	}else{
		cout<<"Target not found";
	}
}