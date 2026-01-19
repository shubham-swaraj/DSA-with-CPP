#include<iostream>
using namespace std;
int main(){
	// int arr[5];
	// cout<<"Enter 5 elements: ";
	// for(int i=0;i<5;i++){
	// 	cin>>arr[i];
	// }
	
	// for(int i=0;i<5;i++){
	// 	cout<<arr[i]<<" ";
	// }
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i= 0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i]<35){
			cout<<i<<" ";
		}
	}
}