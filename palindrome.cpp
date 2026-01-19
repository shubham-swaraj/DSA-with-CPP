#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<0){
		cout<<"Negative numbers cannot be palindromes"<<endl;
		return 0;
	}
	int temp = n;
	int revNUm = 0;
	while(n>0){
		int digit = n%10;
		revNUm = revNUm*10 + digit;
		n = n/10;	

	}
	if(temp == revNUm){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not a Palindrome"<<endl;
	}

}