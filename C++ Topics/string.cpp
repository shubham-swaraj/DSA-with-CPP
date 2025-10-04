#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	//cin>>a;//but here we get only first name 
	getline(cin,a);//here we can get bothe the first and last name 
	cout<<a;
	
	// string a = "hello";
	// string b = "shubham";
	// string c = "hello \"world\"what is going on";
	// cout<<c<<endl;
	// cout<<a.append(b)<<endl;
	// cout<<a[0]<<endl;
	// a[0]='J';
	// cout<<a<<endl;
	// cout<<a.at(5)<<endl;
	
	// cout<<a.length();
	return 0;
}
