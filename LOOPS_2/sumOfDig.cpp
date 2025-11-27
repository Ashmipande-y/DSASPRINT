#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    int sum=0;
    while(n>0){
        int ld;
        ld=n%10;
        sum+=ld;
        n=n/10;
    }
    cout<<"The total number of digits are: "<<sum<<endl;
    
    
    
    
}