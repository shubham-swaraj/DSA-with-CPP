#include<iostream>
using namespace std;
int main()
{
	int arr[] = {10, 20, 30, 40, 50};
	int sum = 0;
	int max = arr[0];
	int min = arr[0];
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<size<<endl;
	cout << "Array elements are: ";
	for(int i =0; i<size; i++){
		cout<< arr[i]<<" ";
	}
	cout<<endl;
	cout<<"sum of all elements in the array is: ";
	for(int i =0; i<size; i++){
		sum += arr[i];
	}
	
	cout<<sum<<endl;
	cout<<"Maximum element in the array is: ";
	for(int i =0; i<size; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}

	cout<<max<<endl;
	cout<<"Minimum element in the array is: ";
	for(int i=0; i<size; i++){
		if(arr[i]<min)
		{
			min=arr[i];
		}
		

	}
	cout<<min<<endl;
	cout<<&arr[0]<<endl;//for the address of first element
	cout<<&arr[1]<<endl;
	return 0;
}