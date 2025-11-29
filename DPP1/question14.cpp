// 14. Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII subtraction (c - '0').
#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    cout << (c - '0');
}
