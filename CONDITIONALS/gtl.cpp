#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n>5){
        cout<<n<<"is greater than 5";
    }
    else if(n==5){
        cout<<n<<"is equal to 5";

    }
    else{
        
        cout<<n<<"is less than 5";
    }
}