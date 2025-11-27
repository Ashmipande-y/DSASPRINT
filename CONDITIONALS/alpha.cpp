#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the number: ";
    cin>>ch;
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<"It's an alphabet";
    }
    else{
        cout<<"It's not an alphabet";
    }
    
}