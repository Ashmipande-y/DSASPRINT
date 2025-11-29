// ### **14. Write a program to input a 4-digit year and print the last two digits.**

// (Eg: 2025 → 25)

#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    cout << y % 100;
}
