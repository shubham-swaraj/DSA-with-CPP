
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> apple = {21,23,45,12,5};
	cout<<"element in the vector are: ";
	//traversing the vector
	for(int i=0; i<apple.size(); i++){
		cout<<apple[i]<<" ";
	}
	cout<<endl;
	//insertion at the last
	cout<<"After insertion at the last: ";
	apple.push_back(50);
	for(int i=0; i<apple.size(); i++){
		cout<<apple[i]<<" ";
	}
	cout<<endl;
	cout<<"After  insertion at the specific location: ";
	//insertion at the specific location
	apple.insert(apple.begin()+4,100);
	for(int i=0;i<apple.size();i++){
		cout<<apple[i]<<" ";
	}
	cout<<endl;
	cout<<"After deletion: ";
	//deletion at the end
	apple.pop_back();
	for(int i=0;i<apple.size();i++){
		cout<<apple[i]<<" ";
	}
	cout<<endl;
	cout<<"After deletion at the specific location: ";
	//deletion at the specific location
	apple.erase(apple.begin()+4);
	for(int i=0;i<apple.size();i++){
		cout<<apple[i]<<" ";
	}
	cout<<endl;
	apple.clear();
	for(int k: apple){
		cout<<k<<" ";
	}
}