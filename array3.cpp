#include<iostream>
using namespace std;
int main(){
	int arr3[] = {10,15,18,31,5};
	int length = sizeof(arr3)/sizeof(arr3[0]);
	cout<<"Length of array is: "<<length<<endl;
	int sum = 0;
	for(int i=0; i<length; i++){
		sum = sum + arr3[i];

	}
	cout<<"Sum of array elements is: "<<sum;
	return 0;
	
}