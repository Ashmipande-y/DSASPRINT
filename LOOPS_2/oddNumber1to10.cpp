#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;//skip the current iteration
            
        }
        cout<<i<<endl;
        
    }
    
}