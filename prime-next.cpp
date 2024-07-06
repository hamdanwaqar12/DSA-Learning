#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: " << endl;
    cin>>n;
    int i = 1;
    while(i <=n){
        if(i == 2 ){
            cout<< "Prime Number:: " << i <<endl;
        } else if(i%2 !=0){
            cout<< "Prime Number:: " << i <<endl;
        } else{
            cout<< "Not Prime Number:: " << i <<endl;
        }
    }
    return 0;
}