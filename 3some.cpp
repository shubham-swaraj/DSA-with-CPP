#include<iostream>
using namespace std;
int largestElement(int arr[], int size){
	int largest = arr[0];
	for(int i=0; i<size; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
	}
	return largest;
 // This line is unreachable
	
}
int main()
{
	int arr[] = {3,5,7,2,8,6,7};
	int size = sizeof(arr)/sizeof(int);
	cout<<"Largest element is: "<<largestElement(arr,size)<<endl;
	int largest = -1;
	cout<<largestElement(arr,size)<<endl;
	return 0;
	
}