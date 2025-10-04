#include<iostream>
using namespace std;
void myFunction(){
	cout<<"learnig to use function"<<endl;
}
void myfunction(string sname){
	cout<<sname<<" swaraj"<<endl;
}
int add(int a, int b){
	
	return a+b;
}
int sum(int k){
	int q = k++;
	return q;
}
int main(){
	myFunction();
	myfunction("shubham");
	myfunction("lexandar");
	myfunction("harry");
	
	cout<<sum(5)<<endl;
	cout<<add(5,4);
	return 0;

}