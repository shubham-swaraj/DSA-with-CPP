#include<iostream>
using namespace std;
int main() {
	int arr[] = {3, 4, 6, 7, 1 };
	int target = 7;
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int i = 0; i <n; i++){
		for(int i =1; i<n; i++){
			sum = arr[i] + arr[i-1];
			if(sum == target){
				cout<<"Target found: "<<arr[i-1]<<" + "<<arr[i]<<" = "<<target<<endl;
			}
		}
	}
}