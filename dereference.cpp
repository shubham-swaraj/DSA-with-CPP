#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	int *p1 = &x; // pointer p1 holds address of x
	int *p2 = &y; // pointer p2 holds address of y
	//taking input using pointers
	cout<<"Enter first number: ";
	cin>>*p1; // dereferencing pointer p1 to take input for x
	cout<<"Enter second number: ";
	cin>>*p2; // dereferencing pointer p2 to take input for y
	cout<<"Sum of two numbers using ptr : "<<*p1 + *p2<<endl; // dereferencing pointers to get values and adding them
}