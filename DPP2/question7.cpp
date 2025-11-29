// Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.
#include<iostream>
using namespace std;
int main(){
    int a = 100;
while (a > 0) {
    cout << a << " ";
    a -= 3;
}


}
