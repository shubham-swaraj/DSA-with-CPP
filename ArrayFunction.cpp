#include<iostream>
using namespace std;
//accesing the element of array  in another function
void display(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<&a<<endl;
	return;
	

}

void change(int b[], int size){
	b[0] = 100;
	cout<<&b<<endl;

}

int main(){
	int arr[5] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	display(arr,size);  // calling of function..
	change(arr,size);
	
	display(arr,size);
	
	cout<<&arr;
	

}
