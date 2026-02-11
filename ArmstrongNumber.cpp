#include<iostream>
using namespace std;
int main(){
	int n; 
	cout<<"Enter a number: ";
	cin>>n;
	string s = to_string(n);
	int k = s.size();
	int sum = 0;
	for(int i = 0; i<k; i++){
		int digit = s[i]-'0';//converting char to int
		sum = sum + (digit*digit*digit);
		
	}
	
	if(sum==n){
		cout<<n<<" is a armstrong number";
	}else
		cout<<"Not a armstrong numbrer";
}