#include<iostream>
using namespace std;
void swap(int &c, int &d){
	int temp;
	temp = c;
	c = d;
	d = temp;
	return;
}
int main(){
	int a;
	cout<<"Enter first number: ";
	cin>>a;
	int b;
	cout<<"Enter second number: ";
	cin>>b;
	swap(a,b);
	cout<<"After swapping the number: "<<endl;
	cout<<"First number: "<<a<<endl;
	cout<<"Second number: "<<b<<endl;
}