#include<iostream>
using namespace std;
int avgvl(int a, int b,int c){
    int avg;
    avg = (a + b + c)/3;
    return avg;
}
int main(){
    int a ,b ,c ,avg;
    cout<<"Enter the first value :"<<endl;
    cin>>a;
    cout<<"Enter the sencond value :"<<endl;
    cin>>b;
    cout<<"Enter the third value :"<<endl;
    cin>>c;
    int avgval = avgvl(a, b ,c);
    cout<<"Answer is :"<<avgval;
    return 0;
}