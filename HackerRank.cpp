#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;
	int arr[5];
	int count = 0;

	for(int i = 0; i<num; i++){
		cin>>arr[i];
	}
	// for(int a:arr){
	// 	cout<<arr[i];
	// }
	for(int i=0; i<num-1; i++){
		if(arr[i]==arr[i+1]){
			count++;
		}
	}
	cout<<count;
		
}