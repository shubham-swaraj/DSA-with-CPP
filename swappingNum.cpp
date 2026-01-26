
///swapping of two number using temp and without temp
#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	//int temp;
	
	
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Before swapping: "<<endl;
	cout<<"First number: "<<a<<endl;
	cout<<"Second number: "<<b<<endl;
	a = a + b;
	b = a - b;
	a = a - b;
	
	//swapping logic
	//temp = a;
	//a = b;
	//b = temp;
	cout<<"After swapping: "<<endl;
	cout<<"First number: "<<a<<endl;	
	cout<<"Second number: "<<b<<endl;
}