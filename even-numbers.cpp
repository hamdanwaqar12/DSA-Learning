#include<iostream>
using namespace std;
int setTable(int n){
    for(int i=1; i <=10; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 30
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<setTable(n)<<endl;
    return 0;
}