// Print the following pattern
// Input: n = 4
// Output:
// a
// a b
// a b c
// a b c d


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    
    
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+96)<<" ";
        }
        cout<<endl;
    }
}