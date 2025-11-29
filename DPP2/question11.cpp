// Take input integer n and print all multiples of 3 from 1 to n using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%3==0){
            cout<<i<<endl;
        }
        i++;
    }

}

//output

// 30
// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27
// 30