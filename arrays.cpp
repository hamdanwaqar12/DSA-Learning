#include<iostream>
using namespace std;

int main() {
    // Declaration and initialization of an array
    int numbers[5]={10,20,30,40,50} ,sum=0;

    // Accessing and printing array elements
    cout << "The elements of the array are: ";
    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
        cout << numbers[i] << " ";
    }
    cout<<"Sum is :"<<sum<<endl;
    cout << endl;

}