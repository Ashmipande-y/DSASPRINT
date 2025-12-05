#include<iostream>
using namespace std;

void show(int x,int y){
    cout<<"Address in void function for x  : "<<&x<<endl;
    cout<<"Address in void function for y  : "<<&y<<endl;
}

int main(){
    int x=5;
    int y=3;
    cout<<"Address in main function for x  : "<<&x<<endl;
    cout<<"Address in main function for y  : "<<&y<<endl;
    show(x,y);
}
