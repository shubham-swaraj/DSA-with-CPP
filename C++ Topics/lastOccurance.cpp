#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr(5);
	for(int i=0; i<arr.size(); i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int Occurance=0;
	// for(int i=0; i<arr.size(); i++){
	// 	if(key==arr[i]){
	// 		Occurance++;
	// 		}
	// }
	
	for(int i=0; i<arr.size(); i++){
		if(key>arr[i]){
			Occurance++;
		}
	}
	cout<<Occurance<<endl;
	return 0;
}