// Take input integer n and print all odd numbers from 1 to n.


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"The list of all even numbers from 1 to n are: "<<endl;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
             cout<<i<<endl;
            
        }
        
    }
}

//output

// 12
// The list of all even numbers from 1 to n are: 
// 1
// 3
// 5
// 7
// 9
// 11

