// 12.Take input integer n and print the factorial of n using a for loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial= "<<fact;
}

//output

// 5
// factorial= 120