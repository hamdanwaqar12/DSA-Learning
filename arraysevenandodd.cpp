#include<iostream>
using namespace std;

int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    // cout<<"Even numbers :"<<endl;
     cout << "Even Numbers : " << endl;
    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout<<"Odd Numbers "<<endl;
    for(int i = 0; i < 20; i++){
        if(arr[i] % 2 != 0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}