#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;

}



int main() {
    int start,end;
    cout<<"Input number for starting range: ";
    cin>>start;
    cout<<"Input number for ending range: ";
    cin>>end;
    int count=0;
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nTotal Primes: "<<count;

}
