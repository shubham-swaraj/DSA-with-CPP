
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> apple = {21,23,45,12,5};
	apple.insert(apple.begin()+4,100);
	apple.pop_back();
	for(int i=0;i<apple.size();i++){
		cout<<apple[i]<<" ";
	}
}