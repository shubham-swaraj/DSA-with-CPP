
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,3,4,5,6};
    int *ptr = arr;
    cout<<ptr;
    cout<<endl;
    cout<<*ptr<<endl;
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<ptr;
    
    

    return 0;
}