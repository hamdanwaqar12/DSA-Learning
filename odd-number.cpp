#include<iostream>
using namespace std;
int geroddnumber(int n){
    if(n % 2 !=0){
        return n;
    }
}
int main(){
    int n;
    cout<<"Enter the number of n"<<endl;
    cin>>n;
    cout<<"Enter the value"<<n<<endl;
    for(int i=1;i<=n;++i){
        int oddNumber = geroddnumber(i);
    if(oddNumber !=0){
        cout<<oddNumber<<" ";
    }
    }
}