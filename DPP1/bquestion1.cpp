// ### Level-Hard

// ### **1. Write a program to input a 3-digit number and print the sum of its digits.**

// (Hint: Extract digits using `%` and `/`.)

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    cout << a + b + c;
}
