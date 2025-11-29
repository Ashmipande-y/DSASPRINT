// 1.Take input integer n and print numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"The numbers from "<<1<<" to "<<n<<" are:"<<endl;
    for(int i=1;i<=n;i++){
        
        cout<<i<<endl;
    }
}

//output
// 5
// The numbers from 1 to 5 are:
// 1
// 2
// 3
// 4
// 5