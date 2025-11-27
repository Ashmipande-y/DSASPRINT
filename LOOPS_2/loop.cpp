#include<iostream>
using namespace std;
int main(){
    // int x=1;
    // while(x>0){
    //     cout<<x;
    //     x=x+1;
    // }
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
    
}