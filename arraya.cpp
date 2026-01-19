// Array operations: reverse, sum, count greater than key, occurrence of a value, max and min value
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    
    int count=0;
    int occurance = 0;
    
    cout<<"element in the array are : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //Array reverse
     cout<<"Reverse of array is: ";
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    //Sum of element in the array
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout<<"Sum of element in the array is: "<<sum<<endl;
    
    //Number of element greater than key
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    for(int i=0; i<n;i++){
        if(arr[i]>key){
            count++;
            
        }
       
    }
    cout<<"Number of element greater than "<<key<<" is : "<<count<<endl;
    
    //Occurance of element in the array of value key
    int value;
    cout<<"the value of element is: ";
    cin>>value;
    for(int i = 0; i<n; i++){
        if(arr[i]==value){
            occurance++;
        }
    }
    cout<<"Occurance of "<<value <<" is :"<<occurance<<endl;
    
    //Max value of element in the array
    cout<<"Max value of element in the array is: ";
    int maxValue = arr[0];
    for(int i= 1; i<n; i++){
        if(arr[i]>maxValue){
            maxValue=arr[i];
            
        }
    }
    cout<<maxValue;
    cout<<endl;
    //Minimum value of element in the array
    cout<<"Minimum value of element in the array is : ";
    int minValue = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]<minValue){
            minValue = arr[i];
        }
    }
    cout<<minValue;
    
    
   
    return 0;
}