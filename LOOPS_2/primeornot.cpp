#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    if(n==1){
        cout<<"Neither composite nor prime";
    }
    bool flag=true;//assumed that n is prime
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}