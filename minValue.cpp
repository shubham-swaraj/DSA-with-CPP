//Finding the minimum value in an array
#include<iostream>
using namespace std;	
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the element of array: ";
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int min = arr[0];
	
	for(int i = 1; i<n; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	cout<<"Minimum value in the array is: "<<min;
}