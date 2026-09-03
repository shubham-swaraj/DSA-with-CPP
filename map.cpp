#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,2,3,3,2,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	unordered_map<int,int> m;
	for(auto x:arr)
	{
		m[x]++;//for checking freq of every element
	}
	int freq = 0;
	int maxEle = 0;
	for(auto k:m){
		if(k.second>freq){
			freq = k.second;
			maxEle = k.first;
		}
		
	}
	cout<<maxEle<<" "<<freq;
}