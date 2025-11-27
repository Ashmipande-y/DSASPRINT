#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<n<<" is a three digit number";
    }
    else{
        cout<<n<<" is not a three digit number";

    }
    
}