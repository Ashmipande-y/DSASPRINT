// 4.Take input integer n and print all even numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"The list of all even numbers from 1 to n are: "<<endl;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}

// //output:-
// 17
// The list of all even numbers from 1 to n are: 
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16