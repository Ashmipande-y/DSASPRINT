// Take input integers a, d, n, and print the first n terms of AP starting from a.

#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cin>>a>>d>>n;
    
    for(int i=0;i<n;i++){
        int term=a+i*d;
         cout<<term<<" ";

    }
    return 0;
   
}
//output


// 20 3 40
// 20 23 26 29 32 35 38 41 44 47 50 53 56 59 62 65 68 71 74 77 80 83 86 89 92 95 98 101 104 107 110 113 116 119 122 125 128 131 134 137 %