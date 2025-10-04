#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 5};
	int *ptr = arr;
	cout<<*ptr<<endl;
	cout<<*(ptr+1);
	

	// int x = 10;
	// int *ptr = &x;
	// cout<<"pointer to x is ptr: "<<*ptr;
	// return 0;
}