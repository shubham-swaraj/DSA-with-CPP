#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v;//declaration of vector 
	//pushing element in the vector
	v.push_back(8);
	v.push_back(9);
	v.push_back(7);
	v.push_back(4);
	v.push_back(3);
	cout<<"Size of vector is : "<<v.size()<<endl;
	cout<<"Capacity of vector is: "<< v.capacity();
	cout<<endl;
	
	
	//printing element in the vector...
	cout<<"Element in the vector v is: ";
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	//sorting vector 
	cout<<"Element in the vector v after sorting is: ";
	sort(v.begin(), v.end());
	for(int j : v){
		cout<<j<<" ";
	}
	cout<<endl;
	
	//printing  element after updation..
	cout<<"Vector after updation at index 0 is: ";
	v[0]=5;
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	//removing element from the vector..
	
	v.pop_back();
	v.pop_back();
	v.pop_back();
	
	//printing element after removing....
	cout<<"Vector v after removing element: ";
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	//intialization of vector with size....
	vector<int> k(5);
	
	//taking user input for the vector...
	cout<<"Enter the element for vector k: ";
	for(int i = 0; i<5; i++){
		int x;
		cin>>x;
		k.push_back(x);
	}
	
	k[1] = 9;  // when size is taken initially updating vector using [] cause garbage value
	for(int i = 0; i<5; i++){
		cout<<k[i]<<" ";
	}
	cout<<endl;
	cout<<k.at(0); //printing element us .at operator
	
	
}
