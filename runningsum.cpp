#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	int runningSum[n];
	runningSum[0] = arr[0];
	for(int i=1; i<n; i++){
		runningSum[i] = runningSum[i-1] + arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<runningSum[i]<<" ";
	}
}