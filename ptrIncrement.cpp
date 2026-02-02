#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int* ptr = &x;
	cout<<ptr<<endl;
	
	//increment of address using reference / pointer 
	//address will increase as per the size of datatypes
	ptr = ptr + 1;
	cout<<ptr<<endl;
}