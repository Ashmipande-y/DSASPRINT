#include<iostream>
using namespace std;
void swap(int a,int b){
    // int temp=a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}
int main(){
    int a=5;
    int b=8;
    swap(a,b);
    
}