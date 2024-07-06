#include<iostream>
using namespace std;
int main(){
int a,count=0,j;
cout<<"find the prime number"<<endl;
cin>>a;
for(int j=1;j<=a;j++){
    if(a % j == 0){
        count++;
    }
}
if(count%2){
    cout<<"\n prime number"<<endl;
}else{
    cout<<"not prime";
}
}