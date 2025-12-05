#include<iostream>
using namespace std;
int b=10;//global scope
void func(){
    int a=5;//local scope
}
int main(){
    
    // cout<<a;
    cout<<b;
    for(int i=0;i<5;i++){
        int a;
    }
    // cout<<a;
}