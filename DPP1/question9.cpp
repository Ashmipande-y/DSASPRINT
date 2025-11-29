// ### **9. Write a program to input a double value and print only its decimal part.**

// (Hint: use `(int)` to remove integer part)

#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    int integerPart = (int)x;
    cout << x - integerPart;
}
