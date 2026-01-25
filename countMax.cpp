//Count the no. of element in the given array greater than a given number....
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the element of array: ";
	int count = 0;
	
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int k:arr)
	{
		cout<<k<<" ";
	}
	cout<<endl;
	int ele;
	cout<<"Enter the given number: ";
	cin>>ele;
	
	for(int i = 0; i<n; i++){
		if(arr[i]>ele){
			count++;
		}
	}
	cout<<"Number of element greater than given number is: "<<count;
}