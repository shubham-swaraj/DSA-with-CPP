#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> element = {10,20,30,40,50};
	// cout<<element.size()<<endl;//size of vector
	// cout<<element.capacity()<<endl;//capacity of vector	
	// element.resize(8);//resize vector
	// cout<<element.size()<<endl;
	// cout<<element.capacity()<<endl;
	// element.push_back(60);//add element at last
	// for(int i=0;i<element.size();i++){
	// 	cout<<element[i]<<" ";//print element
	// }	
	// return 0;
	int sum = 0;
	for(int k: element){
		sum+=k;
	}
	cout<<sum;
	cout<<endl;
	int maxValue = element[0];
	for(int v: element){
		if(v>maxValue){
			maxValue = v;
		}
	}
	cout<<maxValue;
	cout<<endl;
	//reverse print
	cout<<"Reverse print: ";
	for(int i = element.size()-1; i>=0; i--){
		cout<<element[i]<<" ";
	}
}
