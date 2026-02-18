#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	// int n;
	// cin>>n;
	// int arr[n];
	// for(int i = 0; i<n; i++){
	// 	cin>>arr[i];
	// }
	// for(int k : arr){
	// 	cout<<k<<" ";
	// }
	// for(int i = 1; i<n; i++){
	// 	if(arr[i]!=arr[i-1]){
	// 		cout<<count++;
	// 	}
	// }
	// cout<<count;
	vector<int> v;
	int n;
	cout<<"Enter size of the vector: ";
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int k: v){
		cout<<k<<" ";
	}
	cout<<endl;
	
	sort(v.begin(), v.end());
	int count=1;
	for(int l: v){
		cout<<l<<" ";
	}
	cout<<endl;
	
	for(int i = 1; i<n; i++){
		
		if(v[i]!=v[i-1]){
			count++;
		}
	}
	cout<<count;
	
	
	
	

}