// ### **2. Write a program to input a 2-digit number and print the reversed number.**

// (Eg: input 53 → output 35)

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = n / 10;
    int b = n % 10;
    cout << b * 10 + a;
}
