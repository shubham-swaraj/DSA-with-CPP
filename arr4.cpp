#include    <iostream>
using namespace std;        
int main(){
	int arr4[] = {10,20,30,40,50};
	int length = sizeof(arr4)/sizeof(arr4[0]);
	int key = 30;
	cout<<"Length of array is: "<<length<<endl;
	int max = arr4[0];
	for(int i = 0;i<length;i++){
		// if(arr4[i]>max){
		// 	max = arr4[i];
		// }
		if(arr4[i]==key){
			cout<<"Element found at index: "<<i<<endl;
			break;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	cout<<"Maximum element in array is: "<<max;
	return 0;

}
	