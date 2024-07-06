#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int temp;
    int arr[8]={22,4,43,65,78,54,59,31};
    cout<<"Unsorted arrays"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

for( i=0;i<8; i++){
    for( j=i+1;j<8;j++){
        if(arr[j] < arr[i]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
cout<<"Sorted arrys"<<endl;
// cout<<arr[8];
for(int i=0;i<8;i++){
    cout<<arr[i]<<" ";
}
}