// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
		
// 	for(int i=0; i<n; i++){
// 		cin>>arr[i];

// 	}
// 	for(int i=0; i<n; i++){
// 		cout<<arr[i]<<" ";

// 	}
	
// 	int x;
// 	cin >> x;
// 	bool found = false;
// 	for(int i=0; i<n; i++){
// 		if(arr[i] == x){
// 			found = true;
// 			cout<<"Element found at index "<<i<<endl;
// 			break;
// 		}
// 	}
// 	if(!found){
// 		cout<<"Element not found"<<endl;
// 	}
	
// }
#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
   
	int target;
	cout<<"Enter the target value: ";
	cin>>target;
	bool found = false;
	for(int i=0; i<n; i++){
		if(arr[i]==target) found=true;
		break;
		
	}
	if(found){
		cout<<"true";
	} else {
		cout<<"false";
	}
	return 0;
}
