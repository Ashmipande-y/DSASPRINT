// ### **15. Write a program to input any number and print whether its last digit is even or odd using modulus.**

// (Do NOT use if/else → just print the last digit and remainder.)

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n % 10 << " " << (n % 10) % 2;
}
