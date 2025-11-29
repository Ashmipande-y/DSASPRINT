// 3.Take input integer n and print numbers from n down to 1.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"The numbers from n to 1 are as follow: "<<endl;
    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
}
//output
// 10
// The numbers from n to 1 are as follow: 
// 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1


