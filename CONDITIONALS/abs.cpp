#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        n=-1*n; // -(n);
        cout<<n;
    }
}