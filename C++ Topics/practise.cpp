// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	
	cout<<"element in the array are : ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i]>arr[i+1]){
			cout<<arr[i];
		}
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		if(arr[i]+1 <arr[i]){
			cout<<arr[i];
		}
	}
   
	return 0;
}