#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	int b;
	cout<<"Enter a second number: ";
	cin>>b;
	cout<<max(a,b)<<endl;
	cout<<min(a,b)<<endl;
	cout<<pow(a,b)<<endl;
	cout<<sqrt(a)<<endl;
	cout<<a*a;
	cout<<ceil(a);
	return 0;
}