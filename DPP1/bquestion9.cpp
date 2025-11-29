// ### **9. Write a program to input any amount of money in rupees and print how many 100-rupee notes can be made and how much money remains.**

// (use integer division & modulus)
#include <iostream>
using namespace std;

int main() {
    int amt;
    cin >> amt;
    cout << amt / 100 << " " << amt % 100;
}
