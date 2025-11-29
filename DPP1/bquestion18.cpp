// ### **18. Write a program to input a double number, cast it to int, then print:**

// - integer part
// - decimal part
// - integer part + decimal part (as double)
#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    int ip = (int)x;
    double dp = x - ip;
    cout << ip << endl;
    cout << dp << endl;
    cout << ip + dp << endl;
}
