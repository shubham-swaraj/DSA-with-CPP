//to count unique number of occurance
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,2,2,2,3,3};
	bool unique = "true";
	unordered_map<int,int>m;
	for(auto k:arr){
		m[k]++;
	} 
	unordered_set<int> s;
	for(auto l: m){
		if(s.count(l.second)){
			cout<<"false";
		}
		s.insert(l.second);
	}
	cout<<"true";
}