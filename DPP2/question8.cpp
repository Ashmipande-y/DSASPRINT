// 8.Take input integers a, r, n and print the first n terms of GP.

#include<iostream>
using namespace std;
int main(){
    int a,r,n;
    cin>>a>>r>>n;
    int term=a;
    for(int i=0;i<n;i++){
        cout<<term<<" ";
        term*=r;
    }

}

//output
// 2 3 10
// 2 6 18 54 162 486 1458 4374 13122 39366