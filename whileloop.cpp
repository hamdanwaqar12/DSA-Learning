#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int multi = 0;
//     while(i<=n){
//         if(i%2==0){
//             cout<<"even numbers :"<< i <<endl;
//              multi=multi+i;
//         }
//         i++;
//     }
//     cout<<"the answer is :"<< multi <<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int multi = 1;
//     while(i<=n){
//         multi=multi*i;
//         i++;
//     }
//     cout<<"multipy value"<<multi<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row<=n){

//         int space = n - row;
//         while(space){
//             cout<<space;
//             space--;
//         }
//         // int j = 1;
//         // while(j<=row){
//         //     cout<<"*";
//         //     j++;
//         // }
//         // int start = row - 1;
//         // while(start){
//         //     cout<<"*";
//         //     start--;
//         // }
//         // int a = n + row;
//         // while(a){
//         //     cout<<a-j;
//         //     a--;
//         // }
//         cout<<endl;
//         row++;
//     }
// }
int main(){
    int a,b=1;
    a = 10;
    if(++a){
        cout<< b;
    }
    else{
        cout<<++b;
    }
}