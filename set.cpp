#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1, 2, 2, 3,3,3};
	int target = 1;
	unordered_set<int> s;
	for(int i = 0; i<6; i++){
		int k = arr[i];
		s.insert(k);
	}
	if(s.find(target)!=s.end()){
		cout<<"is present in the array";
	}else{
		cout<<"element not found";
	}
	cout<<endl;
	cout<<s.size();
	
	
}