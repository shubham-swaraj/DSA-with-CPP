#include<iostream>
using namespace std;
int main() {
	int arr2[] = {1,2,3,4,5};
	int n = sizeof(arr2)/sizeof(arr2)[0];
	cout<<"Length of array is: "<<n<<endl;
	// for(int i=n-1; i>=0; i--){
	// 	cout<<arr2[i]<<" ";
	// }
	for(int ele: arr2){//for each loop
		cout<<ele<<" ";
	}

}
	
	