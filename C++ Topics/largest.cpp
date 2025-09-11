#include <bits/stdc++.h>
using namespace std;
int main(){
	int a ;
	int b ;
	int c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && a>c){
		cout<<a<<" is the largest";
	}
	else if(b>a && b>c){
		cout<<b<<" is the largest";
	}
	else if(c>a && c>b){
		cout<<c<<" is the largest";
	}
	return 0;
}