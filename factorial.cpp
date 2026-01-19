#include<iostream>
using namespace std;
int factorial(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int fact=1;
	for(int i =1; i<=n; i++){
		fact =fact* i;

	}
	return fact;
	
	
}
int main(){
	cout<<"The factorial of a number is: "<<factorial();
	return 0;
}